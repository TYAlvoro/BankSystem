#ifndef BANK_H
#define BANK_H

#include "Customer.h"
#include <vector>
#include <string>
#include <memory>

class Bank {
public:
    Bank(std::string name);
    std::string getName() const;
    void addCustomer();
    void createAccountForCustomer();
    void depositToAccount();
    void withdrawFromAccount();
    void displayCustomerInfo() const;

private:
    std::string name_;
    std::vector<std::shared_ptr<Customer>> customers_;
};

#endif