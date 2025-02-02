
#include <iostream>
#include <string>

class Account {
protected:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

public:
    Account(const std::string& accNum, const std::string& accHolder, double bal = 0.0)
        : accountNumber(accNum), accountHolder(accHolder), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited " << amount << ". New balance is " << balance << ".\n";
        } else {
            std::cout << "Deposit amount must be positive.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew " << amount << ". New balance is " << balance << ".\n";
        } else {
            std::cout << "Insufficient funds or invalid amount.\n";
        }
    }

    void displayBalance() const {
        std::cout << "Account Balance: " << balance << "\n";
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(const std::string& accNum, const std::string& accHolder, double bal = 0.0, double intRate = 0.05)
        : Account(accNum, accHolder, bal), interestRate(intRate) {}

    void applyInterest() {
        double interest = balance * interestRate;
        balance += interest;
        std::cout << "Applied interest of " << interest << ". New balance is " << balance << ".\n";
    }
};

int main() {
    SavingsAccount savings("123456789", "John Doe", 1000.0, 0.05);
    savings.displayBalance();
    savings.deposit(500);
    savings.withdraw(200);
    savings.applyInterest();
    savings.displayBalance();

    return 0;
}
