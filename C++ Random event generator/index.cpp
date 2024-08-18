#include <ctime>
#include <iostream>

int main()
{

    srand(time(0));

    int randNum = (rand() % 3) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "you get a kiss";
        break;
    case 2:
        std::cout << "you get a hug";
        break;
    case 3:
        std::cout << "you get a slap";
        break;
    }

    return 0;
}
