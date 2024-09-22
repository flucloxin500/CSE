

void insert_employee(node *Head)
{
checkpoint:
    system("cls");
    node *new_node = new node;
    cin>>new_node->id;

    cin>>new_node->name;

    cin>>new_node->dept;

    cin>>new_node->salary;

    new_node ->next = NULL;

    if(Head == NULL)
    {
        Head = new_node;
    }
    else
    {
        node *ptr = Head;
        while(ptr != NULL)
        {
            if(new_node -> id == ptr ->id)
            {
                cout<<"Duplicate Employee ID"<<endl;
                delete new_node;
                getch();
                goto checkpoint;
            }
            ptr = ptr->next;
        }
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
    cout<<"Employee Record inserted successfully"<<endl;
}

