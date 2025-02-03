
#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    string model;

public:
    Car(string b, int y, string m) : Vehicle(b, y), model(m) {}

    void displayInfo() {
        Vehicle::displayInfo();  // Call base class method
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car myCar("Toyota", 2022, "Camry");
    myCar.displayInfo();  // Display car details

    return 0;
}
