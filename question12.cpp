#include <iostream>
using namespace std;

// Base class: BankAccount
class BankAccount {
protected:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully.\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    // Function to display account details
    void displayAccount() const {
        cout << "\nAccount Number: " << accountNumber
             << "\nAccount Holder: " << accountHolder
             << "\nBalance: $" << balance << "\n";
    }
};

// Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor to initialize SavingsAccount with interest rate
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal) {
        interestRate = rate;
    }

    // Function to apply interest
    void applyInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest of $" << interest << " applied.\n";
    }
};

// Main function
int main() {
    // Creating a savings account object
    SavingsAccount acc1(101, "John Doe", 5000, 5.0);

    // Display initial account details
    acc1.displayAccount();

    // Perform transactions
    acc1.deposit(1000);
    acc1.withdraw(2000);
    acc1.applyInterest();

    // Display final account details
    acc1.displayAccount();

    return 0;
}
