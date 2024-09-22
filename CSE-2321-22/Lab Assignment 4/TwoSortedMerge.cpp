#include <iostream>

using namespace std;

//! Defining structure for a node
struct Node
{
    int data;
    Node* next;
};

//! Merge two sorted linked lists
Node* mergeTwoSortedLists(Node* head1, Node* head2)
{
    //! If first list is empty, return second list
    if (head1 == nullptr)
    {
        return head2;
    }
    //! If second list is empty, return first list
    if (head2 == nullptr)
    {
        return head1;
    }

    Node* mergedHead = nullptr;
    if (head1->data <= head2->data)
    {
        mergedHead = head1;
        mergedHead->next = mergeTwoSortedLists(head1->next, head2);
    }
    else
    {
        mergedHead = head2;
        mergedHead->next = mergeTwoSortedLists(head1, head2->next);
    }

    return mergedHead;
}

//! Function to display the linked list
void display(Node* head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//! Function to create a new node with given data
Node* newNode(int data)
{
    Node* node = new Node();
    if (node == nullptr)
    {
        cout << "Memory error\n";
        return nullptr;
    }
    node->data = data;
    node->next = nullptr;
    return node;
}

//! Function to create a linked list from user input
Node* createLinkedList()
{
    Node* head = nullptr;
    Node* tail = nullptr;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int data;
        cin >> data;
        Node* newNodePtr = newNode(data);

        if (head == nullptr)
        {
            head = newNodePtr;
            tail = newNodePtr;
        }
        else
        {
            tail->next = newNodePtr;
            tail = newNodePtr;
        }
    }

    return head;
}

int main()
{
    //! Create two sorted linked lists from user input
    cout << "Enter the first sorted linked list:\n";
    Node* head1 = createLinkedList();

    cout << "Enter the second sorted linked list:\n";
    Node* head2 = createLinkedList();

    cout << "First linked list: ";
    display(head1);

    cout << "Second linked list: ";
    display(head2);

    Node* mergedHead = mergeTwoSortedLists(head1, head2);

    cout << "Merged linked list: ";
    display(mergedHead);

    return 0;
}
