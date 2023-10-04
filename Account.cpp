// Account.cpp
#include <iostream>

class Account {
private:
    std::string accountNumber;
    double balance;

public:
    Account(std::string accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    double getBalance() {
        return balance;
    }
};