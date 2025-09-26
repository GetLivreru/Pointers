#include <iostream>
using namespace std;

int main() {
    cout << "=== ЗАДАЧА 2: Изменение через указатель ===" << endl;
    
    double price = 99.99;
    double* ptr_price = &price;
    
    cout << "Первоначальная цена: " << price << endl;
    

    *ptr_price += 10.01;

    // TODO: Увеличь цену на 10.01 ЧЕРЕЗ УКАЗАТЕЛЬ
    // Подсказка: *ptr_price = *ptr_price + 10.01;
    // или можешь написать: *ptr_price += 10.01;
    
    cout << "Новая цена: " << price << endl;
    cout << "Цена через указатель: " << *ptr_price << endl;
    
    return 0;
}
