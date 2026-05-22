
#include <iostream>
#include <iomanip>   // for manipulators
using namespace std;

// Base Class
class Person
{
protected:
    string firstname, lastname;

public:
    void AcceptPerson()
    {
        cout << "Enter First Name: ";
        cin >> firstname;
        cout << "Enter Last Name: ";
        cin >> lastname;
    }

    void DisplayPerson()
    {
        cout << left << setw(15) << "Name"
             << ": " << firstname << " " << lastname << endl;
    }
};

// Derived Class 1
class Employee : public Person
{
protected:
    int emp_id;
    string joining_date;

public:
    void AcceptEmployee()
    {
        AcceptPerson();
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Joining Date: ";
        cin >> joining_date;
    }

    void DisplayEmployee()
    {
        DisplayPerson();
        cout << left << setw(15) << "Emp ID"
             << ": " << emp_id << endl;
        cout << left << setw(15) << "Joining Date"
             << ": " << joining_date << endl;
    }
};

// Derived Class 2
class Emp_sal : public Employee
{
private:
    float TA, DA, Bonus, NetSalary;

public:
    void AcceptSalary()
    {
        AcceptEmployee();
        cout << "Enter TA: ";
        cin >> TA;
        cout << "Enter DA: ";
        cin >> DA;
        cout << "Enter Bonus: ";
        cin >> Bonus;

        NetSalary = TA + DA + Bonus;
    }

    void DisplaySalarySlip()
    {
        cout << "\n========== Salary Slip ==========\n";
        DisplayEmployee();

        cout << fixed << setprecision(2);
        cout << left << setw(15) << "TA"
             << ": " << TA << endl;
        cout << left << setw(15) << "DA"
             << ": " << DA << endl;
        cout << left << setw(15) << "Bonus"
             << ": " << Bonus << endl;

        cout << "---------------------------------\n";
        cout << left << setw(15) << "Net Salary"
             << ": " << NetSalary << endl;
        cout << "=================================\n";
    }
};

// Main Function
int main()
{
    Emp_sal obj;

    obj.AcceptSalary();
    obj.DisplaySalarySlip();

    return 0;
}