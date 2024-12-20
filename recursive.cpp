#include <iostream>
#include <cmath>


double recursiveSum(double x, int n, int current = 1) 
{
    if (current > n)
    {
        return 0.0; 
    }
    double term = pow(x, current) * sin(current * M_PI / 4); 
    return term + recursiveSum(x, n, current + 1); 
}

int main()
{
    double x;
    int n;


    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение n: ";
    std::cin >> n;


    double S = recursiveSum(x, n);


    std::cout << "Результат: S = " << S << std::endl;

    return 0;
}
