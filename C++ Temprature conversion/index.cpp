#include <iostream>

int main()
{

    char Unit;
    double Temp;

    std::cout << "Choose C of F";
    std::cin >> Unit;
    std::cout << "Enter tempreture";
    std::cin >> Temp;

    if (Unit == 'C' || Unit == 'c')
    {

        Temp = (Temp - 32) / 1.8;
        std::cout << "temprutare is " << Temp << "C";
    }
    else if (Unit == 'F' || Unit == 'f')
    {
        Temp = (1.8 * Temp) + 32.0;
        std::cout << "temprutare is " << Temp << "F";
    }
    else
    {
        std::cout << "you didnt enter a valid character";
    }

    return 0;
}