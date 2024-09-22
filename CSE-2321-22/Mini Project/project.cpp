/*بسم الله الرحمن الرحيم*/
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const int Highest_Size = 1050;

#define nl cout << endl

int N;
int arr[Highest_Size];

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Introduction()
{
    gotoxy(12, 0);
    cout << "Bismillahir Rahmaanir Rahiim" << endl;
    gotoxy(12, 1);
    cout << "Welcome to the Mini Project" << endl;
    gotoxy(12, 2);
    cout << "Spring-24  ||  Course Code:2322" << endl;
    gotoxy(2, 4);
    cout << "Submitted By" << endl;
    gotoxy(2, 5);
    cout << "Name: Walid" << endl;
    gotoxy(2, 6);
    cout << "Id: C231111" << endl;
    gotoxy(2, 7);
    cout << "Section: 3CM" << endl;
    gotoxy(41, 4);
    cout << "Submitted To" << endl;
    gotoxy(41, 5);
    cout << "Mohammed Shamsul Alam" << endl;
    gotoxy(41, 6);
    cout << "Professor, Dept. of CSE,IIUC" << endl;

    gotoxy(4, 9);
    cout << "The mini project is a menu-driven program to Process a sorted array." << endl;
    gotoxy(4, 10);
    cout << "It has the following operation like Insert,Delete,Search,Display and Exit." << endl;
}

void Sort_Array()
{
    for (int j = 1; j <= N - 1; j++)
    {
        for (int k = 1; k <= N - j; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp;
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
}

void RandomArray()
{
    for (int i = 1; i <= N; i++)
    {
        arr[i] = rand();
    }
}
void RandomSorted()
{
    Sort_Array();
}
void Display_Array()
{
    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << " ";
    }
    nl;
}

void InsertSort()
{
    int x, pos;
    cin >> x;
    for (int i = 1; i <= N; i++)
    {
        if (arr[i] >= x)
        {
            pos = i;
            break;
        }
    }
    for (int j = N; j >= pos; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[pos] = x;
    N++;
    ofstream outFile("Random.txt");
    for (int i = 0; i <= N; i++)
    {
        outFile << arr[i] << " ";
    }
    outFile.close();
}

void Delete_Array()
{
    int x;
    cin >> x;
    bool found = false;
    int place = -1;
    for (int i = 1; i <= N; i++)
    {
        if (arr[i] == x)
        {
            place = i;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Item not found in the array.";
        nl;
    }
    else
    {
        for (int j = place; j < N; j++)
        {
            arr[j] = arr[j + 1];
        }
        N--;
        Display_Array();
        nl;
    }
    ofstream outFile("Random.txt");
    for (int i = 0; i <= N; i++)
    {
        outFile << arr[i] << " ";
    }
    outFile.close();
}

void Search_Array()
{
    int value;
    cin >> value;
    int Beg = 0, End = N - 1;
    int Mid = (Beg + End) / 2;
    int loc = -3;
    while (Beg <= End && arr[Mid] != value)
    {
        if (arr[Mid] < value)
        {
            Beg = Mid + 1;
        }
        else
        {
            End = Mid - 1;
        }
        Mid = (Beg + End) / 2;
    }
    if (arr[Mid] == value)
    {
        loc = Mid;
        cout << "Found the value and it's position is: " << loc;
        nl;
    }
    else
    {
        cout << "Not available in the array";
        nl;
    }
}

int menu(void)
{
    int choice;
    do
    {
        cout << "1-Insert";
        nl;
        cout << "2-Delete";
        nl;
        cout << "3-Search";
        nl;
        cout << "4-Display";
        nl;
        cout << "0-Exit";
        nl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 0 || choice > 4)
        {
            cout << endl
                 << "Wrong...Choice again..." << endl;
        }
    } while (choice < 0 || choice > 4);
    return (choice);
}
void Mini_Project()
{
    Introduction();
    nl;
    cout << "Enter the size of N: ";
    cin >> N;
    RandomArray();
    cout << "This is the array of randomly generated values for N: ";
    nl;
    Display_Array();
    nl;
    RandomSorted();
    cout << "This is the sorted array of randomly generated values for N: ";
    nl;
    Display_Array();
    nl;

    int choice;
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            InsertSort();
            break;
        case 2:
            Delete_Array();
            break;
        case 3:
            Search_Array();
            break;
        case 4:
            Display_Array();
            break;
        case 0:
            cout << "End of operation.....!";
            break;
        }
    } while (choice != 0);
}

int main()
{
    Mini_Project();
}
