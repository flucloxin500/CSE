#include <iostream>
using namespace std;
#define SIZE 10
int Queue[SIZE + 1];
int Front, Rear;
int N = SIZE, Item;
int menu(void)
{
    int choice;
    do
    {
        cout << "1-Queue Insert" << endl;
        cout << "2-Queue Delete" << endl;
        cout << "0-Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 0 || choice > 2)
        {
            cout << endl
                 << "Wrong...Choice again..." << endl;
        }
    } while (choice < 0 || choice > 2);
    return (choice);
}
void QInsert()
{
    if (((Front == 1) && (Rear == N)) || (Front == Rear + 1))
    {
        cout << "Overflow.!" << endl;
        return;
    }
    cout << "Enter the item to insert: ";
    cin >> Item;

    if (Front == 0)
    {
        Front = 1;
        Rear = 1;
        Queue[Rear] = Item;
    }
    else if (Rear == N)
    {
        Rear = 1;
        Queue[Rear] = Item;
    }
    else

    {
        Rear++;
        Queue[Rear] = Item;
    }
}
int QDelete()
{
    if (Front == 0)
    {
        cout << "UnderFlow.!" << endl;
        return 0;
    }
    Item = Queue[Front];
    if (Front == Rear)
    {
        Front = 0;
        Rear = 0;
    }
    else if (Front == N)
    {
        Front = 1;
    }
    else

        Front++;
    return Item;
}
void Display()
{
    if (Front == 0)
    {
        cout << "Queue blank" << endl;
    }
    else
    {
        int i = Front;
        cout << "Queue elemnts are: ";
        if (Front <= Rear)
        {
            while (i <= Rear)
            {
                cout << Queue[i] << " ";
                i++;
            }
        }
        else
        {
            while (i < N)
            {
                cout << Queue[i] << " ";
                i++;
            }
            i = 1;
            while (i <= Rear)
            {
                cout << Queue[i] << " ";
                i++;
            }
        }
        cout << endl;
    }
}
int main()
{
    int choice;
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            QInsert();
            Display();
            break;
        case 2:
            QDelete();
            Display();
            break;
        case 0:
            cout << "End of operation";
            break;
        }
    } while (choice != 0);
    return 0;
}