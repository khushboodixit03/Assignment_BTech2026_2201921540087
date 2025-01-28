#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    // Constructor
    Employee(string empName, int empId) {
        name = empName;
        id = empId;
    }

    // Display function
    virtual void display() {
        cout << "Employee ID: " << id << ", Name: " << name << endl;
    }
};

// Derived class
class Manager : public Employee {
private:
    double bonus;

public:
    // Constructor
    Manager(string empName, int empId, double empBonus) : Employee(empName, empId) {
        bonus = empBonus;
    }

    // Override display function
    void display() override {
        cout << "Manager ID: " << id << ", Name: " << name << ", Bonus: " << bonus << endl;
    }
};

int main() {
    Employee emp("Alice", 101);
    Manager mgr("Bob", 102, 5000.0);

    emp.display();
    mgr.display();

    return 0;
}
