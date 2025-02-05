#include <iostream>
using namespace std;

class Car {
private:
    int carID;
    string brand;
    string model;
    double price;

public:
    // Constructor to initialize car details
    Car(int id, string b, string m, double p) {
        carID = id;
        brand = b;
        model = m;
        price = p;
    }

    // Function to display car details
    void displayCar() const {
        cout << "Car ID: " << carID
             << "\nBrand: " << brand
             << "\nModel: " << model
             << "\nPrice: $" << price << "\n\n";
    }
};

// Showroom class to store multiple cars
class Showroom {
private:
    Car* cars[10];  // Array to store cars (max 10 cars)
    int carCount;   // To track number of cars

public:
    // Constructor
    Showroom() {
        carCount = 0;
    }

    // Function to add a car to the showroom
    void addCar(Car* car) {
        if (carCount < 10) {
            cars[carCount] = car;
            carCount++;
        } else {
            cout << "Showroom is full! Cannot add more cars.\n";
        }
    }

    // Function to display all available cars
    void displayCars() const {
        if (carCount == 0) {
            cout << "No cars available in the showroom.\n";
            return;
        }
        cout << "Cars Available in the Showroom:\n";
        for (int i = 0; i < carCount; i++) {
            cars[i]->displayCar();
        }
    }
};

// Main function
int main() {
    // Creating Car objects dynamically
    Car* car1 = new Car(101, "Toyota", "Corolla", 25000);
    Car* car2 = new Car(102, "Honda", "Civic", 27000);
    Car* car3 = new Car(103, "Ford", "Mustang", 55000);

    // Creating a showroom
    Showroom showroom;

    // Adding cars to the showroom
    showroom.addCar(car1);
    showroom.addCar(car2);
    showroom.addCar(car3);

    // Display all cars in the showroom
    showroom.displayCars();

    // Free allocated memory
    delete car1;
    delete car2;
    delete car3;

    return 0;
}
