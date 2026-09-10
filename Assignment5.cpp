#include <iostream>
#include <string>
using namespace std;

// Date class
class Date
{
    int day;
    int month;
    int year;

public:
    void acceptDate()
    {
        cout << "Enter day: ";
        cin >> day;

        cout << "Enter month: ";
        cin >> month;

        cout << "Enter year: ";
        cin >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year;
    }
};


// Person class
class Person
{
    string name;
    string address;
    Date birthdate;   // Association with Date

public:
    void acceptPerson()
    {
        cout << "\nEnter name: ";
        cin >> name;

        cout << "Enter address: ";
        cin >> address;

        cout << "\nEnter birthdate:\n";
        birthdate.acceptDate();
    }

    void displayPerson()
    {
        cout << "\n\n--- Person Details ---";
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nBirthdate: ";
        birthdate.displayDate();
    }
};


// Student class
class Student
{
    int id;
    float marks;
    string course;
    Date joiningDate;   // Association with Date
    Date endDate;       // Association with Date

public:
    void acceptStudent()
    {
        cout << "\n\nEnter student ID: ";
        cin >> id;

        cout << "Enter marks: ";
        cin >> marks;

        cout << "Enter course: ";
        cin >> course;

        cout << "\nEnter joining date:\n";
        joiningDate.acceptDate();

        cout << "\nEnter end date:\n";
        endDate.acceptDate();
    }

    void displayStudent()
    {
        cout << "\n\n--- Student Details ---";
        cout << "\nID: " << id;
        cout << "\nMarks: " << marks;
        cout << "\nCourse: " << course;

        cout << "\nJoining Date: ";
        joiningDate.displayDate();

        cout << "\nEnd Date: ";
        endDate.displayDate();
    }
};


int main()
{
    Person p;
    Student s;

    // Testing Person
    p.acceptPerson();

    // Testing Student
    s.acceptStudent();

    // Displaying details
    p.displayPerson();
    s.displayStudent();

    return 0;
}