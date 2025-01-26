#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    string department;
    int employeeId;
    double salary;

public:
    // Constructor to initialize attributes
    Teacher(string n, string dept, int id, double sal) {
        name = n;
        department = dept;
        employeeId = id;
        salary = sal;
    }

    // Method to display teacher details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }

    // Method to change the department
    void changeDepartment(string newDepartment) {
        department = newDepartment;
        cout << name << "'s department has been changed to " << department << "." << endl;
    }
};

int main() {
    // Creating two objects: Geeta and Babita
    Teacher geeta("Geeta", "Mathematics", 101, 50000.0);
    Teacher babita("Babita", "Physics", 102, 55000.0);

    // Display initial details of Geeta
    cout << "Details of Geeta before department change:" << endl;
    geeta.displayDetails();
    cout << endl;

    // Change Geeta's department
    geeta.changeDepartment("Computer Science");
    cout << endl;

    // Display updated details of Geeta
    cout << "Details of Geeta after department change:" << endl;
    geeta.displayDetails();
    cout << endl;

    // Display details of Babita
    cout << "Details of Babita:" << endl;
    babita.displayDetails();

    return 0;
}