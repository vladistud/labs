#include <iostream>
using namespace std;

void fibonacci(int count, int prev, int curr) 
{
    if (count == 0) 
    {
        return;
    }
    

    cout << prev << " ";
    

    fibonacci(count - 1, curr, prev + curr);
}

int main() 
{
    int quantity;
    
    cout << "Введите количество чисел Фибоначчи для вывода: ";
    cin >> quantity;
    
    cout << "Числа Фибоначчи: ";
    
    int count = 0;
 
    while (count < quantity) 
    {

        fibonacci(quantity - count, 0, 1);
        count = quantity;  
    }
    
    return 0;
}
