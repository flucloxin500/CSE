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

//! Case 1 Deleting first element from the LL
Node *DeleteFirst(Node *head)
{
    Node *ptr = head;
    head = head->next;
    delete ptr;
    return head;
}

//! Case 2 Deleting the element at a given index from the LL
Node *DeleteAtIndex(Node *head, int index)
{
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    delete q;
    return head;
}

//! Case 3 Deleting the last element from the LL
Node *DeleteAtLast(Node *head)
{
    Node *p = head;
    Node *q = head->next;
    while (q->next != nullptr)
    {
        p = p->next;
        q = q->next;
    }
    p->next = nullptr;
    delete q;
    return head;
}

//! Case 4 Deleting the element at a given value from the LL
Node *DeleteValue(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;
    while (q->data != value && q->next != nullptr)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        delete q;
    }
    return head;
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of elements.\n";
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        Node *newNode = new Node;
        cout << "Enter data for node " << i + 1 << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Linked List before deletion\n";
    LinkedListTraversal(head);
    // Example deletion operation
    //head = DeleteFirst(head);
    // head = DeleteAtIndex(head, 2);
    // head = DeleteAtLast(head);
     head = DeleteValue(head, 5);
    cout << "Linked list after deletion\n";
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
