#include <iostream>
using namespace std;

void fibonacci(int quantity, int count, int prev, int curr) 
{
    if (count == quantity) 
    {
        return;
    }
    
    cout << prev << " ";
    
    fibonacci(quantity, count + 1, curr, prev + curr);
}

int main() {
    int quantity;
    
    cout << "Введите количество чисел Фибоначчи для вывода: ";
    cin >> quantity;
    
    cout << "Числа Фибоначчи: ";
    fibonacci(quantity, 0, 0, 1);  // Начальные значения для count, prev и curr
    
    return 0;
}
