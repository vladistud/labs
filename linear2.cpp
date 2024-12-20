#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
    return x - 1.0 / (3.0 + sin(3.6 * x));
}
double f1(double x)
{
    return 1.0 + 3.6 * cos(3.6 * x) / pow(3.0 + sin(3.6 * x), 2);
}
double f2(double x)
{
    return -12.96 * sin(3.6 * x) / pow(3.0 + sin(3.6 * x), 2) - 25.92 * pow(cos(3.6 * x), 2) / pow(3.0 + sin(3.6 * x), 3);
}
int main()
{
    double a, b, x0, x, e;
    a = 0.0;
    b = 0.85;
    e = 0.0000001;
    if (f(a) * f2(a) > 0)
    {
        x0 = a;
        cout << "x0 = a" << endl;
    }
    else
    {
        if (f(b) * f2(b) > 0)
        {
            x0 = b;
            cout << "x0 = b" << endl;
        }
        else
        {
            cout << "Корней нет в заданном отрезке";
            return 0;
        }
    }
    x = x0 - f(x0) / f1(x0);
    while (abs(x - x0) > e)
    {
        x0 = x;
        cout << x0 << endl;
        x = x0 - f(x0) / f1(x0);
    }
    cout << "Приблизительный корень: " << x;
    return 0;
}
