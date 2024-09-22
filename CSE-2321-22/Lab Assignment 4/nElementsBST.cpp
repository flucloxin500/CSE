#include <bits/stdc++.h>

using namespace std;

#define nl cout << endl;

struct NodeType
{
    int info;
    NodeType *left;
    NodeType *right;
};

typedef NodeType *NodePtr;
NodePtr root;

void insertNode(int item)
{
    NodePtr p, newNode, back;

    p = root;
    back = nullptr;

    newNode = new NodeType;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->info = item;

    while (p != nullptr)
    {
        back = p;
        if (p->info > item)
            p = p->left;
        else
            p = p->right;
    }

    if (back == nullptr)
        root = newNode;
    else if (back->info > item)
        back->left = newNode;
    else
        back->right = newNode;
}

void inOrder(NodePtr p)
{
    if (p != nullptr)
    {
        inOrder(p->left);
        cout << p->info << "  ";
        inOrder(p->right);
    }
}

void preOrder(NodePtr p)
{
    if (p != nullptr)
    {
        cout << p->info << "  ";
        preOrder(p->left);
        preOrder(p->right);
    }
}

void postOrder(NodePtr p)
{
    if (p != nullptr)
    {
        postOrder(p->left);
        postOrder(p->right);
        cout << p->info << "  ";
    }
}

int menu()
{
    int n;
    nl;
    nl;
    cout << "Main Menu";
    nl;
    cout << "1. Insert";
    nl;
    cout << "2. Display";
    nl;
    cout << "3. Exit";
    nl;
    cout << "Enter Choice (1-3): ";
    cin >> n;
    nl;
    return n;
}

void Display()
{
    if (root)
    {
        nl;
        cout << "Traverse Tree InOrder";
        nl;
        inOrder(root);
        nl;
        cout << "Traverse Tree PreOrder";
        nl;
        preOrder(root);
        nl;
        cout << "Traverse Tree PostOrder";
        nl;
        postOrder(root);
    }
    else
    {
        nl;
        cout << "BST IS NULL";
        nl;
    }
}

int main()
{
    int VAL;

    root = nullptr;

    int n = menu();

    do
    {
        if (n == 1)
        {
            nl;
            cout << "Insert a value: ";
            cin >> VAL;
            insertNode(VAL);
        }
        else if (n == 2)
        {
            Display();
        }
        else if (n == 3)
        {
            nl;
            break;
        }
        else
        {
            nl;
            cout << "Wrong Choice";
            nl;
        }
        n = menu();
    } while (1);

    return 0;
}
