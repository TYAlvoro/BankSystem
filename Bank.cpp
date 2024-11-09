#include "Bank.h"
#include <iostream>

Bank::Bank(std::string name) : name_(std::move(name)) {}

std::string Bank::getName() const {
    return name_;
}

void Bank::addCustomer() {
    std::string name;
    std::cout << "Enter customer name: ";
    std::cin >> name;
    customers_.push_back(std::make_shared<Customer>(name));
    std::cout << "Customer " << name << " added.\n";
}

void Bank::createAccountForCustomer() {
    int id;
    std::cout << "Enter customer ID: ";
    std::cin >> id;
    if (id >= 0 && id < customers_.size()) {
        customers_[id]->createAccount();
    } else {
        std::cout << "Invalid customer ID.\n";
    }
}

void Bank::depositToAccount() {
    int id;
    double amount;
    std::cout << "Enter customer ID: ";
    std::cin >> id;
    if (id >= 0 && id < customers_.size()) {
        std::cout << "Enter amount to deposit: ";
        std::cin >> amount;
        customers_[id]->deposit(amount);
    } else {
        std::cout << "Invalid customer ID.\n";
    }
}

void Bank::withdrawFromAccount() {
    int id;
    double amount;
    std::cout << "Enter customer ID: ";
    std::cin >> id;
    if (id >= 0 && id < customers_.size()) {
        std::cout << "Enter amount to withdraw: ";
        std::cin >> amount;
        customers_[id]->withdraw(amount);
    } else {
        std::cout << "Invalid customer ID.\n";
    }
}

void Bank::displayCustomerInfo() const {
    for (size_t i = 0; i < customers_.size(); ++i) {
        std::cout << "Customer ID: " << i << "\n";
        customers_[i]->displayInfo();
    }
}
