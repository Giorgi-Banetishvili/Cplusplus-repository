#include <iostream>
#include <ctime>

int main()
{

    srand(time(0));

    int num = (rand() % 10) + 1;

    std::cout << num;

    return 0;
}
