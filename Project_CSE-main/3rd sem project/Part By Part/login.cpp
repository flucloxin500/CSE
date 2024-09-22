void login()
{
checkpoint:
    system("cls");
    string name,password;
    cout<<"\n\n";
    cout<<"\t\t\t------------------";
    cout<<"\n\n\t\t\t\tLogin Panel";
    cout<<"\n\n\t\t\t--------------";
    cout<<"\n\n\n Enter User Name : ";
    cin>>name;
    cout<<"\n\n Enter password : ";
    cin>>password;
    cout<<endl;
    if(name == "sayeed@gmail.com" && password == "123456")
    {
        cout<<"Login Successfully"<<endl;
        Control_Menu();
    }
    else if(name == "sayam@gmail.com" && password == "654321")
    {
        cout<<"Login Successfully"<<endl;
        Control_Menu();
    }
    else if(name == "walid@gmail.com" && password == "111111")
    {
        cout<<"Login Successfully"<<endl;
        Control_Menu();
    }
    else cout<<"User name & password is incorrect.."<<endl;
    getch();
    goto checkpoint;

}
