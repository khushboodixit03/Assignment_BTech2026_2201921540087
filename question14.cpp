#include <iostream>
using namespace std;

// Base class: Vehicle
class Vehicle {
protected:
    string brand;
    int year;

public:
    // Constructor
    Vehicle(string b, int y) {
        brand = b;
        year = y;
    }

    // Virtual function to display vehicle details
    virtual void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
private:
    int numDoors;

public:
    // Constructor
    Car(string b, int y, int doors) : Vehicle(b, y) {
        numDoors = doors;
    }

    // Override displayInfo
    void displayInfo() override {
        cout << "Car - Brand: " << brand << ", Year: " << year << ", Doors: " << numDoors << endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
private:
    bool hasGear;

public:
    // Constructor
    Bike(string b, int y, bool gear) : Vehicle(b, y) {
        hasGear = gear;
    }

    // Override displayInfo
    void displayInfo() override {
        cout << "Bike - Brand: " << brand << ", Year: " << year << ", Has Gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

// Main function
int main() {
    // Creating objects of Car and Bike
    Car car1("Toyota", 2022, 4);
    Bike bike1("Yamaha", 2020, true);

    // Display details
    car1.displayInfo();
    bike1.displayInfo();

    return 0;
}
