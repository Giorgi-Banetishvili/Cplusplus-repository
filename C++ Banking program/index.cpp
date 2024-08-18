#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "Enter your choice: \n";
        std::cout << "*****************\n";
        std::cout << "1.show balance\n";
        std::cout << "2. deposit money\n";
        std::cout << "3. withdraw moeny\n";
        std::cout << "4. exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {

        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visting!\n";
            break;
        default:
            std::cout << "invalid choice!";
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is:" << std::setprecision(2) << std::fixed << balance << "\n";
}
double deposit()
{
    double amount;
    std::cout << "Enter how much money you would like to deposit: ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {

        std::cout << "that is not a valid amount  ";
        return 0;
    }
}
double withdraw(double balance)
{

    double amount;
    std::cout << "enter amount to be withdrawn  ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "insuficent amount  ";
        return 0;
    }
    else if (amount < 0)
    {

        std::cout << "thats not a valid amount  ";
        return 0;
    }
    else
    {
        return amount;
    }
}