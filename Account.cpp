#include "Account.h"
#include <iostream>

Account::Account() : balance_(0.0) {}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance_ += amount;
        std::cout << "$" << amount << " deposited.\n";
    } else {
        std::cout << "Deposit amount must be positive.\n";
    }
}

void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance_) {
        balance_ -= amount;
        std::cout << "$" << amount << " withdrawn.\n";
    } else {
        std::cout << "Invalid withdrawal amount.\n";
    }
}

void Account::displayBalance() const {
    std::cout << "Balance: $" << balance_ << "\n";
}
