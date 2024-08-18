#include <iostream>

int main()
{
    std::string password;
    std::string passwordC;

    std::cout << "Enter a Password: ";
    std::cin >> password;

    std::cout << "Enter your Password again: ";
    std::cin >> passwordC;

    if (password != "")
    {
        if (passwordC != "")
        {
            if (size(password) >= 6 && size(passwordC) >= 6)
            {
                if (password == passwordC)
                {
                    std::cout << "Passwords match";
                }
                else
                {
                    std::cout << "Passwords do not match";
                }
            }
            else
            {
                std::cout << "Please enter 6 or more characters";
            }
        }
        else
        {
            std::cout << "Please enter a Password confirmation";
        }
    }
    else
    {
        std::cout << "Please enter a Password";
    }

    return 0;
}
