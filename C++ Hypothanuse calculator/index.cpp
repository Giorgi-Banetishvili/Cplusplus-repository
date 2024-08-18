#include <iostream>
#include <cmath>

double a;
double b;
double c;

int main()
{

    std::cout << "enter side a" << '\n';
    std::cin >> a;
    std::cout << "enter side b" << '\n';
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << c;

    return 0;
}