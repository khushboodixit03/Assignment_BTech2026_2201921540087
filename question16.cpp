#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks[3];

public:
    // Method to set student details
    void setDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    // Method to calculate the average marks
    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }

    // Method to display student details
    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nAverage Marks: " << calculateAverage() << endl;
    }
};

// Main function
int main() {
    Student s1;

    s1.setDetails();  // Input student details
    s1.displayDetails();  // Display student details

    return 0;
}
