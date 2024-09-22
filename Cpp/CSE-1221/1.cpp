                                        /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
/* In the name of Almighty ALLAH, The most Gracious, The most Merciful*/
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string ID;
    string semester;
    string section;

private:
    float cgpa;

public:
    void get_data() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student ID: ";
        cin >> ID;
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Section: ";
        cin >> section;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void show_data() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << ID << endl;
        cout << "Semester: " << semester << endl;
        cout << "Section: " << section << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter data for Student " << i + 1 << ":" << endl;
        students[i].get_data();
    }

    cout << "Student Data: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].show_data();
        cout << endl;
    }

    return 0;
}





/*
Input
Enter the number of students: 2
Enter data for Student 1:
Enter Student Name: Walid
Enter Student ID: C231111
Enter Semester: 2nd
Enter Section: 2CM
Enter CGPA: 3.145
Enter data for Student 2:
Enter Student Name: Sadman
Enter Student ID: C231112
Enter Semester: 2nd
Enter Section: 2CM
Enter CGPA: 3.14



Output
Student Data:
Student 1:
Student Name: Walid
Student ID: C231111
Semester: 2nd
Section: 2CM
CGPA: 3.145

Student 2:
Student Name: Sadman
Student ID: C231112
Semester: 2nd
Section: 2CM
CGPA: 3.04

*/
