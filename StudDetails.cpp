#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    void setDetails(string studentName, int studentRollNo)
    {
        name = studentName;
        rollNo = studentRollNo;
    }

    void displayDetails()
    {
        cout << "Student name: " << name << endl;
        cout << "Roll number: " << rollNo << endl;
    }
};

int main()
{
    Student student1;
    string name;
    int rollNo;

    cout << "Enter student name (single word): ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;

    student1.setDetails(name, rollNo);

    cout << "\nDisplaying student details:\n";
    student1.displayDetails();

    return 0;
}
