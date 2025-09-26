#include <iostream>
using namespace std;

int main() {
    cout << "=== ЗАДАЧА 3: Обмен значений ===" << endl;
    
    int a = 10, b = 20;
    cout << "До обмена: a = " << a << ", b = " << b << endl;
    
    // TODO: Создай указатели на a и b
    int* ptr_a = &a;
    int* ptr_b = &b;
    cout << "Указатели: ptr_a = " << *ptr_a << ", ptr_b = " << *ptr_b << endl;
    // TODO: Обменяй значения a и b ЧЕРЕЗ УКАЗАТЕЛИ
    // Подсказка: 
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
    cout << "После обмена: a = " << a << ", b = " << b << endl;

    cout << "Указатели: ptr_a = " << *ptr_a << ", ptr_b = " << *ptr_b << endl;
    
    return 0;
}
