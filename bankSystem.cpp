#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    do
    {
        std::cout << "***********************\n";
        std::cout << "Enter Your Choice\n";
        std::cout << "***********************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting!\n";
            break;

        default:
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "\nYour balance is: $ " << balance;
}
double deposit()
{
    double amount = 0;
    std::cout << "\nEnter amount to be deposited: ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "\nThe amount is not valid";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    if (amount > balance)
    {
        std::cout << "\nInsufficient Balance";
        return 0;
    }
    return amount;
}