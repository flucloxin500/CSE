#include<bits/stdc++.h>
#include<conio.h> // for
#include <unistd.h> // for sleep
using namespace std;

///colour code
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"

struct node {
    string id;
    string name;
    string dept;
    double salary;
    node* next;
};
void login();
void admin_panel();
void registerUser();
void intro();
void insert_employee();
void searching_id();
void Control_Menu();
void edit();
void delete_employee();
void display();

node* Head = NULL;

vector<pair<string, string>> users;


void edit() {
    system("cls");
    int found = 0;
    string EmpId;
    cout << " MODIFY EMPLOYEE RECORD " << endl;
    if (Head == NULL) {
        cout << " Linked List is empty " << endl;
    } else {
        cout << " Employee ID For Modify: ";
        cin >> EmpId;
        node* ptr = Head;
        while (ptr != NULL) {
            if (EmpId == ptr->id) {
                cout << " Employee Name: ";
                cin >> ptr->name;
                cout << endl;
                cout << " Employee Department: ";
                cin >> ptr->dept;
                cout << endl;
                cout << " Employee Salary: ";
                cin >> ptr->salary;
                cout << endl;
                cout << " Employee Record Modified ";
                found++;
            }
            ptr = ptr->next;
        }
        if (found == 0) {
            cout << " Employee ID Not Found ";
        }
    }
}

void delete_employee() {
    system("cls");
    int found = 0;
    string EmpId;
    cout << " Delete Employee Record ";
    if (Head == NULL) {
        cout << " Linked List Is Empty " << endl;
    } else {
        cout << " Employee ID For Deletation ";
        cin >> EmpId;
        if (EmpId == Head->id) {
            node* ptr = Head;
            Head = Head->next;
            delete ptr;
            cout << endl;
            cout << " Employee Record Deleted ";
        } else {
            node* ptr = Head;
            node* prev = NULL;
            while (ptr != NULL) {
                if (EmpId == ptr->id) {
                    if (prev == NULL) {
                        Head = Head->next;
                    } else {
                        prev->next = ptr->next;
                    }
                    delete ptr;
                    cout << endl;
                    cout << " Employee Record Deleted ";
                    found++;
                    break;
                }
                prev = ptr;
                ptr = ptr->next;
            }
            if (found == 0) {
                cout << " Employee ID Not Found ";
            }
        }
    }
}

void display() {
    system("cls");
    cout << " Display Employee Record " << endl;
    if (Head == NULL) {
        cout << " Linked List is Empty " << endl;
    } else {
        node* ptr = Head;
        while (ptr != NULL) {
            cout << " Employee ID: " << ptr->id << endl;
            cout << " Employee Name: " << ptr->name << endl;
            cout << " Employee Department: " << ptr->dept << endl;
            cout << " Employee Salary: " << ptr->salary << endl;
            cout << endl;
            ptr = ptr->next;
        }
    }
}


void intro() {
    cout << MAGENTA"\t\t\t\t\t\t\t" << endl;
    cout << "\n\n\n\n\n\n\n\n\n                                             #################################"<<endl;
    cout<<"                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #   Employee Management System  #" << endl;
    cout<<"                                             #                               #"<<endl;
    cout << "                                             #################################"RESET << endl;
    cout<<BLUE"\n\n\n\n\                                                Press Enter  to continue..."RESET;
    getch();
}




void insert_employee() {

    system("cls");
    node* new_node = new node;
    cout << "Enter Employee ID: ";
    cin >> new_node->id;
    cout << "Enter Employee Name: ";
    cin >> new_node->name;
    cout << "Enter Employee Department: ";
    cin >> new_node->dept;
    cout << "Enter Employee Salary: ";
    cin >> new_node->salary;
    new_node->next = NULL;

    if (Head == NULL) {
        Head = new_node;
    }
    else {
        node* ptr = Head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    cout << "Employee Record inserted successfully" << endl;
    getch();
}



void searching_id(){
    system("cls");
    bool fnd = false;
    string id;
    if(Head == NULL){
        cout<<"Employee List is Empty!"<<endl;
    }
    else{
        cout<<"to search : "<<endl;
        cin>>id;
        node *ptr = Head;
        while(ptr != NULL){
            if(id == ptr -> id){
                system("cls");
                cout<<"search employee founds"<<endl;
                cout<<" id : "<<ptr -> id<<endl;
                cout<<" name : "<<ptr -> name<<endl;
                cout<<" department : "<<ptr -> dept<<endl;
                cout<<" salary : "<<ptr -> salary<<endl;
                fnd = true;
            }
            ptr = ptr -> next;
        }
        if(!fnd){
            cout<<"employee not found";
        }
    }
    getch();
}
void Control_Menu() {
    node* Head = NULL;
    int choice;
    while (true) {
        cout << "\n\n";
        cout << "\t\t\t------------------";
        cout << "\n\n\t\t\t\tControl Menu";
        cout << "\n\n\t\t\t--------------";
        system("cls");
        cout << "1. Add Employee information" << endl;
        cout << "2. Update Employee information" << endl;
        cout << "3. Delete Employee information" << endl;
        cout << "4. Search Employee " << endl;
        cout << "5. Display All Employees" << endl;
        cout << "6. Admin Panel" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            insert_employee();
            break;
        case 2:
            edit();
            break;
        case 3:
            delete_employee();
            break;
        case 4:
            searching_id();
            break;
        case 5:
            display();
            break;
        case 6:
            admin_panel();
        case 7:
            exit(0);
            break;
        default:
            cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }
}

void login() {
    system("cls");
    cout << MAGENTA"\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################"<<endl;
    cout<<"                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #          ADMIN PANEL          #" << endl;
    cout<<"                                             #                               #"<<endl;
    cout << "                                             #################################\n\n\n"RESET << endl;
    string name, password;
    cout << BLUE"\t\t\t\t\t     Enter a username: "RESET;
    cin >> name;
    cout << BLUE"\n\n\t\t\t\t\t     Enter a password: "RESET;
    cin >> password;
    for (auto user : users) {
        if (user.first == name && user.second == password) {
            cout << GREEN"\n\n\n\n\t\t\t\t\t     Login successful......"RESET << endl;sleep(2);
            Control_Menu();
            return;
        }
        else{
            cout << RED"\n\n\n\n\t\t\t\t       User name & password is incorrect.."RESET << endl;sleep(2);
            admin_panel();
        }
    }

}
void registerUser() {
    system("cls");
    cout << MAGENTA"\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################"<<endl;
    cout<<"                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #          ADMIN PANEL          #" << endl;
    cout<<"                                             #                               #"<<endl;
    cout << "                                             #################################\n\n\n"RESET << endl;
    string name, password;
    cout << BLUE"\t\t\t\t\t     Enter a username: "RESET;
    cin >> name;
    cout << BLUE"\n\n\t\t\t\t\t     Enter a password: "RESET;
    cin >> password;
    users.push_back({name, password});
    cout << GREEN"\n\n\n\n\t\t\t\t\t        Registration successful!"RESET << endl;
    sleep(2);
    admin_panel();
}

void admin_panel(){
    checkpoint:
    system("cls");
    cout << MAGENTA"\t\t\t\t\t\t\t" << endl;
    cout << "                                             #################################"<<endl;
    cout<<"                                             #                               #";
    cout << "\t\t\t\t\t\n                                             #          ADMIN PANEL          #" << endl;
    cout<<"                                             #                               #"<<endl;
    cout << "                                             #################################\n\n\n"RESET << endl;
    int choice;
        cout << BLUE"\t\t\t\t\t\t\t1. Register\n" << endl;
        cout << "\t\t\t\t\t\t\t2. Login\n" << endl;
        cout << "\t\t\t\t\t\t\t3. Exit\n\n\n" << endl;
        cout << "\t\t\t\t\t\tEnter your choice: "RESET;
        cin >> choice;
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                login();
                break;
            case 3:
                return ;
            default:
                cout << RED"\n\n\t\t\t\t\t    Invalid choice. Please try again."RESET << endl;sleep(1);
                goto checkpoint;
                getch();
}
}








int main() {
    intro();
    admin_panel();
    return 0;
}
