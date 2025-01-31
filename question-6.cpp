#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;

public:
    Vehicle(string b, string m) : brand(b), model(m) {}

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

class Car : public Vehicle {
private:
    int seats;

public:
    Car(string b, string m, int s) : Vehicle(b, m), seats(s) {}

    void displayCar() {
        display(); // Calling base class function
        cout << "Seats: " << seats << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 5);
    myCar.displayCar();
    return 0;
}
