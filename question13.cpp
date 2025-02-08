#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string holder, double bal) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = bal;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Main function
int main() {
    // Creating a bank account object
    BankAccount account(101, "John Doe", 500.0);

    // Performing transactions
    account.display();
    account.deposit(200);
    account.withdraw(100);
    account.withdraw(700);  // Should show insufficient funds
    account.display();

    return 0;
}
