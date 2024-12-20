#include <iostream>
#include <cmath>
using namespace std;

double fi(double x) 
{
    return 1.0 / (3.0 + sin(3.6 * x));
}

int main() 
{
    double x_prev = 0.425;
    double tolerance = 0.00001;
    double x_curr = fi(x_prev);

    while (abs(x_curr - x_prev) > tolerance) 
    {
        x_prev = x_curr;
        x_curr = fi(x_prev);
    }

    cout << x_curr;
    return 0;
}
