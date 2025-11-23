// Levchenko_Lab_3.cpp

#include <iostream>
#include <math.h>

int main()
{
    const int a = -1;
    const int b = -4;
    const double c = 6.3;
    double f = sqrt(b / (b - a)) / (pow(b, 2) + a * b * c) + abs(b + a);
    std::cout << "f = " << f << "\n";
    return 0;
}
