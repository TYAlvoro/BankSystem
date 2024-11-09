#include "Bank.h"
#include "Customer.h"
#include <iostream>

int main() {
  Bank bank("MyBank");

  std::cout << "Welcome to " << bank.getName() << "!\n";

  bool running = true;
  while (running) {
    std::cout << "\nMenu:\n";
    std::cout << "1. Create new customer\n";
    std::cout << "2. Create account for customer\n";
    std::cout << "3. Deposit money\n";
    std::cout << "4. Withdraw money\n";
    std::cout << "5. Display customer information\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";

    int choice;
    std::cin >> choice;

    switch (choice) {
      case 1:
        bank.addCustomer();
        break;
      case 2:
        bank.createAccountForCustomer();
        break;
      case 3:
        bank.depositToAccount();
        break;
      case 4:
        bank.withdrawFromAccount();
        break;
      case 5:
        bank.displayCustomerInfo();
        break;
      case 6:
        running = false;
        break;
      default:
        std::cout << "Invalid choice. Please try again.\n";
    }
  }

  return 0;
}
