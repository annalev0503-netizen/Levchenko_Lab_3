// Levchenko_Lab_3.cpp

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Enter x:\nx = ";
    double x = 0;
    cin >> x;
    double y = (sin(x) - pow(x, 2)) / (2 * x + 1) + pow(1 + x, x) / (1 + 3*x);
    cout << "\ny = " << y << "\n";
    return 0;
}
