#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void LinkedListTraversal(Node *ptr)
{
    while (ptr != nullptr)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

//! Case 1
Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node;
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

//! Case 2
Node *insertAtIndex(Node *head, int data, int index)
{
    Node *ptr = new Node;
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//! Case 3
Node *insertAtEnd(Node *head, int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    Node *p = head;

    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = nullptr;
    return head;
}

//! Case 4
Node *insertAfterNode(Node *head, Node *prevNode, int data)
{
    Node *ptr = new Node;
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main()
{
    Node *head = nullptr;

    int n;
    cout << "Enter the number of elements to insert: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of elements.\n";
        return 0;
    }

    head = new Node;
    cout << "Enter data for node 1: ";
    cin >> head->data;
    head->next = nullptr;

    Node *tail = head;

    for (int i = 2; i <= n; ++i)
    {
        Node *newNode = new Node;
        cout << "Enter data for node " << i << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;
        tail->next = newNode;
        tail = newNode;
    }

    cout << "Linked List before insertion\n";
    LinkedListTraversal(head);

    // Example insertion operation
    // head = insertAtFirst(head, 52);
    // head = insertAtIndex(head, 50, 3);
    // head = insertAtEnd(head, 47);
    head = insertAfterNode(head, head, 47);

    cout << "Linked list after insertion\n";
    LinkedListTraversal(head);

    // Free dynamically allocated memory
    Node *temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
