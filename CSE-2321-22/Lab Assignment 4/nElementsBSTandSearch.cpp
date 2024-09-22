#include <bits/stdc++.h>

using namespace std;

struct NodeType
{
    int info;
    NodeType *left;
    NodeType *right;
};

// typedef for NodeType pointer
typedef NodeType *NodePtr;

// Global variable for root node
NodePtr root = nullptr;

// Function to insert a new node with given value
void insertNode(int value)
{
    NodePtr newNode, current, parent;

    // Allocate a new node in memory
    newNode = new NodeType;
    newNode->info = value;
    newNode->left = nullptr;
    newNode->right = nullptr;

    // If the tree is empty, assign the new node to root
    if (root == nullptr)
    {
        root = newNode;
    }
    else
    {
        current = root;
        while (true)
        {
            parent = current;

            // Go to the left subtree
            if (value < current->info)
            {
                current = current->left;

                // If the left child is empty, assign the new node here
                if (current == nullptr)
                {
                    parent->left = newNode;
                    return;
                }
            }
            else
            {
                // Go to the right subtree
                current = current->right;

                // If the right child is empty, assign the new node here
                if (current == nullptr)
                {
                    parent->right = newNode;
                    return;
                }
            }
        }
    }
}

// Function to search for a node with given value and return its index
int searchNode(NodePtr node, int value, int &index)
{
    int result = -1; // -1 indicates not found

    if (node != nullptr)
    {
        index++; // increment index as we traverse the tree

        if (node->info == value)
        {
            result = index;
        }
        else if (node->info > value)
        {
            result = searchNode(node->left, value, index);
        }
        else
        {
            result = searchNode(node->right, value, index);
        }
    }

    return result;
}

int main()
{
    int numberOfElements, value, searchValue, index;

    // Get the number of elements to insert
    cout << "Enter the number of elements to insert: ";
    cin >> numberOfElements;

    // Insert elements one by one
    for (int i = 0; i < numberOfElements; ++i)
    {
        cout << "Insert value " << i + 1 << ": ";
        cin >> value;
        insertNode(value);
    }

    // Get the value to search
    cout << "Enter value to search: ";
    cin >> searchValue;

    // Search for the value and display the result
    index = 0;
    int result = searchNode(root, searchValue, index);

    if (result != -1)
    {
        cout << "Value found at index " << result << "." << endl;
    }
    else
    {
        cout << "Value not found in the BST." << endl;
    }

    return 0;
}
