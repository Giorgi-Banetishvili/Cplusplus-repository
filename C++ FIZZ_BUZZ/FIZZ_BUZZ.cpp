#include <iostream>

int main()
{

    for (int i = 1; i <= 15; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {

            std::cout << "FIZZBUZZ" << "\n";
        }
        else if (i % 3 == 0)
        {

            std::cout << "FIZZ" << "\n";
        }
        else if (i % 5 == 0)
        {

            std::cout << "BUZZ" << "\n";
        }
        else
        {
            std::cout << i << "\n";
        }
    }

    return 0;
}