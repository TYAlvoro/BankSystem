#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Account.h"
#include <string>
#include <memory>

class Customer {
public:
    Customer(std::string name);
    void createAccount();
    void deposit(double amount);
    void withdraw(double amount);
    void displayInfo() const;

private:
    std::string name_;
    std::shared_ptr<Account> account_;
};

#endif