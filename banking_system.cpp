#include <iostream>

int main() {
    double balance = 100.00;
    int choice;

    while (true) {
        std::cout << "******Welcome To Capitec Banking System******" << std::endl;
        std::cout << "1. Show Balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdrawal" << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cout << "What would you like to do?: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Balance: R" << balance << std::endl;
        } else if (choice == 2) {
            double deposit;

            std::cout << "Enter the amount of money to deposit: R";
            std::cin >> deposit;

            balance += deposit;

            std::cout << "Deposit successfully" << std::endl;
            std::cout << "Balance: R" << balance << std::endl;
        } else if (choice == 3) {
            double withdrawal;

            std::cout << "Enter the amount of money to deposit: R";
            std::cin >> withdrawal;

            balance -= withdrawal;

            std::cout << "Withdrawal successfully" << std::endl;
            std::cout << "Balance: R" << balance << std::endl;
        } else if (choice == 4) {
            std::cout << "Thank you for visiting" << std::endl;
            break;
        }
    }

    return 0;
}