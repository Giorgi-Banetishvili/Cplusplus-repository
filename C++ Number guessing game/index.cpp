#include <iostream>
#include <ctime>

int main()
{

    srand(time(0));
    int randNum = (rand() % 100) + 1;
    int guess;

    do
    {
        std::cout << "guess a number 1-100" << "\n";
        std::cin >> guess;

        if (guess < randNum)
        {
            std::cout << "Too low" << "\n";
        }
        else if (guess > randNum)
        {
            std::cout << "Too high " << "\n";
        }
        else
        {
            std::cout << "you got the correct answer!!!";
        }

    } while (guess != randNum);

    return 0;
}