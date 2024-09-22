#include <bits/stdc++.h>

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

Node *createLinkedList(int n)
{
    Node *head = nullptr;
    Node *temp = nullptr;
    Node *p = nullptr;

    for (int i = 1; i <= n; i++)
    {
        temp = new Node;
        cout << "Enter data for node " << i  << ": ";
        cin >> temp->data;
        temp->next = nullptr;

        if (head == nullptr)
        {
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != nullptr)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Node *head = createLinkedList(n);

    cout << "\nLinked List:\n";
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
