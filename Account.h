#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account();
    void deposit(double amount);
    void withdraw(double amount);
    void displayBalance() const;

private:
    double balance_;
};

#endif