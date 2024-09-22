#include <iostream>

using namespace std;

struct NodeType
{
    int info;
    NodeType *left;
    NodeType *right;
};

// typedef for NodeType pointer
typedef NodeType* NodePtr;

// Function to create a new node with given value
NodePtr createNode(int value)
{
    NodePtr newNode = new NodeType;
    newNode->info = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a new node with given value into the BST
NodePtr insertNode(NodePtr node, int value)
{
    if (node == nullptr)
    {
        return createNode(value);
    }

    if (value < node->info)
    {
        node->left = insertNode(node->left, value);
    }
    else if (value > node->info)
    {
        node->right = insertNode(node->right, value);
    }

    return node;
}

// Function to find the minimum value node in the BST
NodePtr findMin(NodePtr node)
{
    while (node->left != nullptr)
    {
        node = node->left;
    }
    return node;
}

// Function to delete a node with given value from the BST
NodePtr deleteNode(NodePtr node, int value)
{
    if (node == nullptr)
    {
        return node;
    }

    if (value < node->info)
    {
        node->left = deleteNode(node->left, value);
    }
    else if (value > node->info)
    {
        node->right = deleteNode(node->right, value);
    }
    else
    {
        // Case 1: No child
        if (node->left == nullptr && node->right == nullptr)
        {
            delete node;
            return nullptr;
        }
        // Case 2: One child
        else if (node->left == nullptr)
        {
            NodePtr temp = node;
            node = node->right;
            delete temp;
            return node;
        }
        else if (node->right == nullptr)
        {
            NodePtr temp = node;
            node = node->left;
            delete temp;
            return node;
        }
        // Case 3: Two children
        else
        {
            NodePtr temp = findMin(node->right);
            node->info = temp->info;
            node->right = deleteNode(node->right, temp->info);
        }
    }

    return node;
}

// Function to print the BST in inorder traversal
void printInorder(NodePtr node)
{
    if (node != nullptr)
    {
        printInorder(node->left);
        cout << node->info << " ";
        printInorder(node->right);
    }
}

int main()
{
    int n, value, deleteValue;

    cout << "Enter the number of elements to insert: ";
    cin >> n;

    NodePtr root = nullptr;

    for (int i = 0; i < n; ++i)
    {
        cout << "Insert value " << i + 1 << ": ";
        cin >> value;
        root = insertNode(root, value);
    }

    cout << "Inorder traversal of the BST: ";
    printInorder(root);
    cout << endl;

    cout << "Enter the value to delete: ";
    cin >> deleteValue;

    root = deleteNode(root, deleteValue);

    cout << "Inorder traversal of the BST after deletion: ";
    printInorder(root);
    cout << endl;

    return 0;
}
