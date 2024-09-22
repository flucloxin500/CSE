#include <iostream>
using namespace std;

#define MAX_SIZE 10000

int Queue[MAX_SIZE];
int Front, Rear;

int menu()
{
    int choice;
    do
    {
        cout<<endl;
        cout << "1-Insert";
        cout<<endl;
        cout<<"2-Delete";
        cout<<endl;
        cout<<"0-Exit";
        cout<<endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice < 0 || choice > 2)
            cout << "\nWrong choice. Please choose again.\n";
    } while (choice < 0 || choice > 2);

    return choice;
}

void Insert(int element)
{
    if ((Front == 1 && Rear == MAX_SIZE) || (Front == Rear + 1))
    {
        cout << "\nQUEUE IS FULL" << endl;
        return;
    }
    else if (Front == 0)
    {
        Front = 1;
        Rear = 1;
        Queue[Rear] = element;
    }
    else if (Rear == MAX_SIZE)
    {
        Rear = 1;
        Queue[Rear] = element;
    }
    else
    {
        Rear++;
        Queue[Rear] = element;
    }
}

int Delete()
{
    if (Front == 0)
    {
        cout << "\nQUEUE IS EMPTY" << endl;
        return -1;
    }
    int element = Queue[Front];
    if (Front == Rear)
    {
        Front = 0;
        Rear = 0;
    }
    else if (Front == MAX_SIZE)
    {
        Front = 1;
    }
    else
        Front += 1;
    return element;
}

void display()
{

    if (Front == 0)
    {
        cout << "QUEUE IS EMPTY!" << endl;
    }
    cout << "elements are : ";
    int i = Front;
    if (Front <= Front)
    {
        while (i <= Front)
            cout << Queue[i++] << " ";
    }
    else
    {
        while (i < MAX_SIZE)
            cout << Queue[i++] << " ";
        i = 0;
        while (i <= Rear)
            cout << Queue[i++] << " ";
    }
    cout << endl;
}

int main()
{
    int choice, value;
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            cout << "Enter value to Insert: ";
            cin >> value;
            Insert(value);
            display();
            break;
        case 2:
            value = Delete();
            if (value != -1)
                cout << "Deleted element: " << value << endl;
            display();
            break;
        case 0:
            cout << "End of operations.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}