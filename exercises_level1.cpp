#include <iostream>
using namespace std;

/**
 * 🎯 ЗАДАЧИ УРОВЕНЬ 1: Базовые операции с указателями
 * 
 * Инструкция: Раскомментируй код и заполни пропуски
 */

void exercise1() {
    cout << "\n=== ЗАДАЧА 1: Первое знакомство ===" << endl;
    
    int age = 25;
    
    // TODO: Создай указатель ptr_age, который указывает на переменную age
    int* ptr_age = &age;
    
    cout << "Возраст: " << age << endl;
    // TODO: Выведи адрес переменной age
    cout << "Адрес age: " << &age << endl;
    
    // TODO: Выведи значение ptr_age (должен быть адрес)
    cout << "Значение ptr_age: " << ptr_age << endl;
    
    // TODO: Выведи значение по адресу ptr_age (должно быть 25)
    cout << "Значение по адресу (*ptr_age): " << *ptr_age << endl;
}

void exercise2() {
    cout << "\n=== ЗАДАЧА 2: Изменение через указатель ===" << endl;
    
    double price = 99.99;
    double* ptr_price = &price;
    
    cout << "Первоначальная цена: " << price << endl;
    
    // TODO: Увеличь цену на 10.01 ЧЕРЕЗ УКАЗАТЕЛЬ (используй *ptr_price)
    // Твой код здесь:
    ptr_price +=10.01;

    cout << "Новая цена: " << price << endl;
    cout << "Цена через указатель: " << *ptr_price << endl;
}

void exercise3() {
    cout << "\n=== ЗАДАЧА 3: Обмен значений ===" << endl;
    
    int a = 10, b = 20;
    cout << "До обмена: a = " << a << ", b = " << b << endl;
    
    // TODO: Создай указатели на a и b
    int* ptr_a = &a;
    int* ptr_b = &b;
    
    // TODO: Обменяй значения a и b ЧЕРЕЗ УКАЗАТЕЛИ
    // Подсказка: понадобится временная переменная
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
    
    cout << "После обмена: a = " << a << ", b = " << b << endl;
}

void exercise4() {
    cout << "\n=== ЗАДАЧА 4: Безопасность указателей ===" << endl;
    
    int* dangerous_ptr;  // Неинициализированный указатель!
    
    // TODO: Инициализируй указатель значением nullptr
    // dangerous_ptr = ...;
    
    // TODO: Проверь, что указатель не равен nullptr перед использованием
    // if (...) {
    //     cout << "Указатель безопасен для использования" << endl;
    // } else {
    //     cout << "Указатель пуст (nullptr)" << endl;
    // }
}

// Бонусная задача для продвинутых!
void bonus_exercise() {
    cout << "\n=== БОНУС: Указатели на указатели ===" << endl;
    
    int value = 42;
    int* ptr = &value;
    
    // TODO: Создай указатель на указатель (double pointer)
    // int** ptr_to_ptr = ...;
    
    cout << "Значение: " << value << endl;
    // TODO: Выведи значение через двойной указатель
    // cout << "Через двойной указатель: " << ... << endl;
}

int main() {
    cout << "🎓 ПРАКТИЧЕСКИЕ ЗАДАЧИ ПО УКАЗАТЕЛЯМ (УРОВЕНЬ 1)" << endl;
    cout << "Раскомментируй код и заполни пропуски!" << endl;
    
    exercise1();
    exercise2();
    exercise3();
    exercise4();
    bonus_exercise();
    
    cout << "\n🎉 Когда выполнишь все задачи, покажи мне результат!" << endl;
    
    return 0;
}
