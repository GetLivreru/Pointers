#include <iostream>
using namespace std;

/**
 * 💡 РЕШЕНИЯ ЗАДАЧ УРОВЕНЬ 1
 * 
 * НЕ СМОТРИ СЮДА, ПОКА НЕ ПОПРОБУЕШЬ САМ! 😤
 */

void exercise1_solution() {
    cout << "\n=== ЗАДАЧА 1: Решение ===" << endl;
    
    int age = 25;
    int* ptr_age = &age;  // Указатель на age
    
    cout << "Возраст: " << age << endl;
    cout << "Адрес age: " << &age << endl;
    cout << "Значение ptr_age: " << ptr_age << endl;
    cout << "Значение по адресу (*ptr_age): " << *ptr_age << endl;
}

void exercise2_solution() {
    cout << "\n=== ЗАДАЧА 2: Решение ===" << endl;
    
    double price = 99.99;
    double* ptr_price = &price;
    
    cout << "Первоначальная цена: " << price << endl;
    
    *ptr_price += 10.01;  // Увеличиваем через указатель
    
    cout << "Новая цена: " << price << endl;
    cout << "Цена через указатель: " << *ptr_price << endl;
}

void exercise3_solution() {
    cout << "\n=== ЗАДАЧА 3: Решение ===" << endl;
    
    int a = 10, b = 20;
    cout << "До обмена: a = " << a << ", b = " << b << endl;
    
    int* ptr_a = &a;
    int* ptr_b = &b;
    
    // Обмен через указатели
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
    
    cout << "После обмена: a = " << a << ", b = " << b << endl;
}

void exercise4_solution() {
    cout << "\n=== ЗАДАЧА 4: Решение ===" << endl;
    
    int* dangerous_ptr = nullptr;  // Безопасная инициализация
    
    if (dangerous_ptr != nullptr) {
        cout << "Указатель безопасен для использования" << endl;
    } else {
        cout << "Указатель пуст (nullptr)" << endl;
    }
}

void bonus_exercise_solution() {
    cout << "\n=== БОНУС: Решение ===" << endl;
    
    int value = 42;
    int* ptr = &value;
    int** ptr_to_ptr = &ptr;  // Указатель на указатель
    
    cout << "Значение: " << value << endl;
    cout << "Через двойной указатель: " << **ptr_to_ptr << endl;
    
    // Дополнительная информация для понимания
    cout << "\nДополнительно:" << endl;
    cout << "Адрес value: " << &value << endl;
    cout << "Значение ptr: " << ptr << endl;
    cout << "Адрес ptr: " << &ptr << endl;
    cout << "Значение ptr_to_ptr: " << ptr_to_ptr << endl;
}

int main() {
    cout << "💡 РЕШЕНИЯ ЗАДАЧ УРОВЕНЬ 1" << endl;
    cout << "Смотри только после того, как попробовал сам!" << endl;
    
    exercise1_solution();
    exercise2_solution();
    exercise3_solution();
    exercise4_solution();
    bonus_exercise_solution();
    
    return 0;
}
