#include <bits/stdc++.h>
#include <conio.h>  // for getch function
#include <unistd.h> // for sleep function
#include <cstdlib> // for the exit()
#include<windows.h> // gotoxy
#include <fstream> // file
using namespace std;

/// colour code
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define Bright_CYAN "\x1B[96m"
#define Bright_Magenta "\x1B[95m"

void User_Role_Panel(){
    checkpoint:
    system("cls");
    cout << MAGENTA "\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################" << endl;
    cout << "                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #       USER ROLE PANEL         #" << endl;
    cout << "                                             #                               #" << endl;
    cout << "                                             #################################" RESET << endl;
     int choice;
    cout <<BLUE"                                             #################################" << endl;
    cout << "                                             #                               #\n";
    cout << "                                             #                               #\n";
    cout << "                                             #                               #\n";
    cout <<  "\n\t\t\t\t\t\t\t1. Admin Panel\n"
         << endl;
    cout << "\t\t\t\t\t\t\t2. Employee Panel\n"
         << endl;
    cout << "\t\t\t\t\t\t\t3. Exit\n\n\n";
        cout << "                                             #                               #\n";
        cout << "                                             #                               #\n";
        cout << "                                             #                               #\n";
        cout << "                                             #################################\n";
        cout << "\n\t\t\t\t\t           Enter your choice: "RESET;
    cin >> choice;
    switch (choice)
    {
    case 1:
//admin_panel();
        //cout<<"nothing";
        break;
    case 2:
        employee_panel();
        break;
    case 3:
        return;
    default:
        cout << RED "\n\n\t\t\t\t\t    Invalid choice. Please try again." RESET << endl;
        sleep(1);
        goto checkpoint;
    }
}

void employee_panel(){
    checkpoint:
    system("cls");
    cout << MAGENTA "\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################" << endl;
    cout << "                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #        EMPLOYEE PANEL         #" << endl;
    cout << "                                             #                               #" << endl;
    cout << "                                             #################################" RESET << endl;
    int choice;
    cout <<BLUE"                                             #################################" << endl;
    cout << "                                             #                               #\n";
    cout << "                                             #                               #\n";
    cout << "                                             #                               #\n";
    cout <<  "\n\t\t\t\t\t\t\t1. Display Employee Detail\n"
         << endl;
    cout << "\t\t\t\t\t\t\t2. Update Employee Detail\n"
         << endl;
    cout << "\t\t\t\t\t\t\t3. Exit\n\n\n";
        cout << "                                             #                               #\n";
        cout << "                                             #                               #\n";
        cout << "                                             #                               #\n";
        cout << "                                             #################################\n";
        cout << "\n\t\t\t\t\t           Enter your choice: "RESET;
        cin >> choice;
    switch (choice)
    {
    case 1:
        Display_Employee_Detail();
        break;
    case 2:
        Update_Employee_Detail();
    case 3:
        return;
    default:
        cout << RED "\n\n\t\t\t\t\t    Invalid choice. Please try again." RESET << endl;
        sleep(1);
        goto checkpoint;
    }
}

void Display_employee_Detail(){
    cout<<"Employee Id to search : ";
}

int main(){

}
