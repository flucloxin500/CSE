#include <bits/stdc++.h>
using namespace std;

void heapifyDown(int heap[], int n, int i)
{
    int largest = i;       //* Initialize largest as root
    int left = 2 * i + 1;  //* left child index
    int right = 2 * i + 2; //* right child index

    //* If left child is larger than root
    if (left < n && heap[left] > heap[largest])
        largest = left;

    //* If right child is larger than the largest so far
    if (right < n && heap[right] > heap[largest])
        largest = right;

    //* If largest is not root
    if (largest != i)
    {
        swap(heap[i], heap[largest]);
        //* Recursively heapify the affected sub-tree
        heapifyDown(heap, n, largest);
    }
}

void heapifyUp(int heap[], int i)
{
    //* Find parent
    int parent = (i - 1) / 2;

    //! For max-heap, if current element is greater than its parent, swap them
    if (i && heap[i] > heap[parent])
    {
        swap(heap[i], heap[parent]);
        //* Recursively heapify the parent
        heapifyUp(heap, parent);
    }
}

//* Function to insert an element into the heap
void insert(int heap[], int &n, int element)
{
    //* Insert the new element at the end of the heap
    heap[n] = element;
    n++;
    //* Heapify the new element following a bottom-up approach
    heapifyUp(heap, n - 1);
}

//* Function to display the elements of the heap
void displayHeap(int heap[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << heap[i] << " ";
    cout << endl;
}

int main()
{
    const int MAX_SIZE = 100; //* Maximum size of the heap
    int heap[MAX_SIZE];
    int n = 0; //* Current number of elements in the heap

    //* Number of elements to be inserted
    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    //* Insert elements into the max heap
    for (int i = 0; i < numElements; ++i)
    {
        int element;
        cout << "Enter No "<<i+1<<" elements: ";
        cin >> element;
        insert(heap, n, element);
    }

    //* Display the elements of the heap
    cout << "MaxHeap elements: ";
    displayHeap(heap, n);

    return 0;
}
