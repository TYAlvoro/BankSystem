#include "Customer.h"
#include <iostream>

Customer::Customer(std::string name) : name_(std::move(name)), account_(nullptr) {}

void Customer::createAccount() {
    account_ = std::make_shared<Account>();
    std::cout << "Account created for " << name_ << ".\n";
}

void Customer::deposit(double amount) {
    if (account_) {
        account_->deposit(amount);
    } else {
        std::cout << "No account exists for customer.\n";
    }
}

void Customer::withdraw(double amount) {
    if (account_) {
        account_->withdraw(amount);
    } else {
        std::cout << "No account exists for customer.\n";
    }
}

void Customer::displayInfo() const {
    std::cout << "Customer: " << name_ << "\n";
    if (account_) {
        account_->displayBalance();
    } else {
        std::cout << "No account exists for this customer.\n";
    }
}