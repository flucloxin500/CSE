
struct node
{
    string id;
    string name;
    string dept;
    double salary;
    node *next;
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
void salarySlip();

node *Head = NULL;

vector<pair<string, string>> users;



void insert_employee()
{

    system("cls");
    node *new_node = new node;
    cout << "Enter Employee ID: ";
    cin >> new_node->id;
    cout << "Enter Employee Name: ";
    cin >> new_node->name;
    cout << "Enter Employee Department: ";
    cin >> new_node->dept;
    cout << "Enter Employee Salary: ";
    cin >> new_node->salary;
    new_node->next = NULL;

    if (Head == NULL)
    {
        Head = new_node;
    }
    else
    {
        node *ptr = Head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    cout << "Employee Record inserted successfully" << endl;
    getch();
}

void edit()
{
    system("cls");
    int found = 0;
    string EmpId;
    cout << " MODIFY EMPLOYEE RECORD " << endl;
    if (Head == NULL)
    {
        cout << " Linked List is empty " << endl;
    }
    else
    {
        cout << " Employee ID For Modify: ";
        cin >> EmpId;
        node *ptr = Head;
        while (ptr != NULL)
        {
            if (EmpId == ptr->id)
            {
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
        if (found == 0)
        {
            cout << " Employee ID Not Found ";
        }
    }
}

void delete_employee()
{
    system("cls");
    int found = 0;
    string EmpId;
    cout << " Delete Employee Record ";
    if (Head == NULL)
    {
        cout << " Linked List Is Empty " << endl;
    }
    else
    {
        cout << " Employee ID For Deletation :";
        cin >> EmpId;
        if (EmpId == Head->id)
        {
            node *ptr = Head;
            Head = Head->next;
            delete ptr;
            cout << endl;
            cout << " Employee Record Deleted ";
        }
        else
        {
            node *ptr = Head;
            node *prev = NULL;
            while (ptr != NULL)
            {
                if (EmpId == ptr->id)
                {
                    if (prev == NULL)
                    {
                        Head = Head->next;
                    }
                    else
                    {
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
            if (found == 0)
            {
                cout << " Employee ID Not Found ";
            }
        }
    }
}

void display()
{
    int exit;
    system("cls");
    cout << " Display Employee Record " << endl;
    if (Head == NULL)
    {
        cout << " Linked List is Empty " << endl;
    }
    else
    {
        node *ptr = Head;
        while (ptr != NULL)
        {
            cout << " Employee ID: " << ptr->id << endl;
            cout << " Employee Name: " << ptr->name << endl;
            cout << " Employee Department: " << ptr->dept << endl;
            cout << " Employee Salary: " << ptr->salary << endl;
            cout << endl;
            ptr = ptr->next;
        }
    }
    cout << endl;
    cout << "Press any number go to menu bar" << endl;
    cin >> exit;
}




void searching_id()
{
    system("cls");
    bool fnd = false;
    string id;
    if (Head == NULL)
    {
        cout << "Employee List is Empty!" << endl;
    }
    else
    {
        cout << "to search : " << endl;
        cin >> id;
        node *ptr = Head;
        while (ptr != NULL)
        {
            if (id == ptr->id)
            {
                system("cls");
                cout << "search employee founds" << endl;
                cout << " id : " << ptr->id << endl;
                cout << " name : " << ptr->name << endl;
                cout << " department : " << ptr->dept << endl;
                cout << " salary : " << ptr->salary << endl;
                fnd = true;
            }
            ptr = ptr->next;
        }
        if (!fnd)
        {
            cout << "employee not found";
        }
    }
    getch();
}







int main()
{
    intro();
    admin_panel();
    return 0;
}
