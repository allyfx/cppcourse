#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{
  int choice;
  double balance = 0;

  do {
    std::cout << "**********************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "**********************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit money\n";
    std::cout << "3. Withdraw money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    switch(choice) {
      case 1:
        showBalance(balance);
        break;
      case 2:
        balance = deposit(balance);
        break;
      case 3:
        balance = withdraw(balance);
        break;
      case 4:
        std::cout << "Exitting program...\n";
        std::cout << "Bye!\n";
        break;
      default:
        std::cout << "Invalid option.\n";
        break;
    }
  } while (choice != 4);

  return 0;
}

void showBalance(double balance) {
  std::cout << "Your balance is " << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(double balance) {
  double amount;

  std::cout << "Enter amount to deposit: \n";
  std::cin >> amount;

  return balance + amount;
}

double withdraw(double balance) {
  double amount;

  std::cout << "Enter amount to withdraw: \n";
  std::cin >> amount;

  return balance - amount;
}
