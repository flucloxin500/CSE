                                        /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <iostream>
using namespace std;
class Customer {
public:
    string name;
    string address;
    string mobile_no;
    double pricelist[10];
    void get_data() {
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Customer Address: ";
        cin >> address;
        cout << "Enter Customer Mobile Number: ";
        cin >> mobile_no;

        cout << "Enter 10 prices for this customer:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Price " << i + 1 << ": ";
            cin >> pricelist[i];}
    }
    void show_data() {
        cout << "Customer Name: " << name << endl;
        cout << "Customer Address: " << address << endl;
        cout << "Customer Mobile Number: " << mobile_no << endl;
        cout << "Prices for this customer:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Price " << i + 1 << ": " << pricelist[i] << endl;}
    }
};

int main() {
    int N;
    cout << "Enter the number of customers: ";
    cin >> N;
    Customer customers[N];
    for (int i = 0; i < N; i++) {
        cout << "Enter data for Customer " << i + 1 << ":" << endl;
        customers[i].get_data();}
    cout << "Customer Data: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Customer " << i + 1 << ":" << endl;
        customers[i].show_data();
        cout << endl;}
}


/*
Enter the number of customers: 2

Enter data for Customer 1:
Enter Customer Name: Alice
Enter Customer Address: 123 Main St
Enter Customer Mobile Number: 555-123-4567
Enter 10 prices for this customer:
Price 1: 100.5
Price 2: 75.25
Price 3: 50.0
Price 4: 30.75
Price 5: 45.0
Price 6: 80.25
Price 7: 60.5
Price 8: 95.0
Price 9: 120.75
Price 10: 70.0

Enter data for Customer 2:
Enter Customer Name: Bob
Enter Customer Address: 456 Elm St
Enter Customer Mobile Number: 555-987-6543
Enter 10 prices for this customer:
Price 1: 60.25
Price 2: 40.5
Price 3: 85.0
Price 4: 110.75
Price 5: 95.25
Price 6: 70.0
Price 7: 50.5
Price 8: 35.0
Price 9: 120.25
Price 10: 80.75


Customer Data:
Customer 1:
Customer Name: Alice
Customer Address: 123 Main St
Customer Mobile Number: 555-123-4567
Prices for this customer:
Price 1: 100.5
Price 2: 75.25
Price 3: 50.0
Price 4: 30.75
Price 5: 45.0
Price 6: 80.25
Price 7: 60.5
Price 8: 95.0
Price 9: 120.75
Price 10: 70.0

Customer 2:
Customer Name: Bob
Customer Address: 456 Elm St
Customer Mobile Number: 555-987-6543
Prices for this customer:
Price 1: 60.25
Price 2: 40.5
Price 3: 85.0
Price 4: 110.75
Price 5: 95.25
Price 6: 70.0
Price 7: 50.5
Price 8: 35.0
Price 9: 120.25
Price 10: 80.75

*/