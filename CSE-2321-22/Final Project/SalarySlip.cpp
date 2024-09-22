void Employee::Salary_Slip()
{
    system("cls");
    int found = 0;
    string EmpId;
    coud << endl;
    cout << endl;
    cout << "\t\t\t======================";
    cout << endl;
    cout << endl;
    cout << "\t\t\t   Salary Slip Generator";
    cout << endl;
    cout << endl;
    cout << "\t\t\t======================";
    if (Head == NULL)
    {
        cout << endl;
        cout << endl;
        cout << "***Linked List is Blank***";
    }
    else
    {
        cout << endl;
        cout << endl;
        cout << " Employee Id for Slip: ";
        cin >> EmpId;
        Node *ptr = Head;
        while (ptr != NULL)
        {
            if (EmpId == ptr->Emp_Id)
            {
                system("cls");
                cout << endl;
                cout << "\t\t\t******************************";
                cout << endl;
                cout << "\t\t\t*                            *";
                cout << endl;
                cout << "\t\t\t*    Employee Salary Slip    *";
                cout << endl;
                cout << "\t\t\t*                            *";
                cout << endl;
                cout << "\t\t\t******************************";
                cout << endl;
                cout << endl;
                cout << "\t\t\t  Employee Id:           " << ptr->Emp_Id;
                cout << endl;
                cout << endl;
                cout << "\t\t\t  Name:                  " << ptr->Name;
                cout << endl;
                cout << endl;
                cout << "\t\t\t  Post:                  " << ptr->Post;
                cout << endl;
                cout << endl;
                cout << "\t\t\t  Department:            " << ptr->Department;
                cout << endl;
                cout << endl;
                cout << "\t\t\t  Salary:                " << ptr->Salary;
                cout << endl;
                cout << endl;
                cout << "\t\t\t******************************";
                cout << endl;
                cout << "\t\t\t******************************";
                found++;
            }
            ptr = ptr->Next_Add;
        }
        if (found == 0)
        {
            cout << endl;
            cout << endl;
            cout << " ***Employee Id Not found***";
        }
    }
}