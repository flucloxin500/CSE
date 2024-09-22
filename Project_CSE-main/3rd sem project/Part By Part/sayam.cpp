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
