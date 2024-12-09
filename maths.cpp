#include <iostream>
#include <math.h>
#include <ostream>


using namespace std;


int calculator()
{
    setlocale(LC_ALL, "Rus");
    short symbol;
    float first, second, result;
    
    cout << "Введите первое число: ";
    cin >> first;
    cout << "1 = +\n2 = -\n3 = /\n4 = *\nВведите математический знак: ";
    cin >> symbol;
    cout << "Введите второе число: ";
    cin >> second;

    if (symbol == 1) {
        result = first + second;
        
    }
    else if (symbol == 2) {
        result = first - second;
    } 
    else if (symbol == 3) {
        result = first / second;
    }
    else if (symbol == 4) {
        result = first * second;
    }
    else {
        cout << "Что-то пошло не так" << endl;
        return 1;
    }

    cout << "Равно: " << result << endl;
    return 0;
}


int sum(int a, int b, int c) {
    // суммирую и отдаю резалт
    return a + b + c;
}

int mul(int a, int b, int c) {
    // умножаю и отдаю резалт
    return a * b * c;
}

float bet(int a, int b, int c) {
    // ищу среднее ариф и отдаю резалт
    return (float)sum(a, b, c) / 3;
}

int homework1() {
    // объявляю переменные 3 чисел и результата
    int first, second, third, result;
    float float_result;
    // получаю три числа от юзера
    setlocale(LC_ALL, "Rus");
    cout << "Введите три числа: " << endl;
    cin >> first >> second >> third;
    // считаем и выводим сумму 3 чисел
    result = sum(first, second, third);
    cout << "Сумма: " << result << endl;

    // считаем и выводим произведение 3 чисел
    result = mul(first, second, third);
    cout << "Произведение: " << result << endl;

    // считаем и выводим среднее арифм 3 чисел
    float_result = bet(first, second, third);
    cout << "Среднее арифметическое: " << float_result << endl;

    return 0;
}


void incrementsDecrements() {
    // инкременты декременты в с++

    int parameter = 1;
    
    cout << parameter++ << endl;
    parameter = 1;
    cout << ++parameter << endl;
    parameter = 1;
    cout << ++parameter*parameter << endl;
    parameter = 1;
    cout << ++parameter*parameter++ << endl;

    // a = 0;
    // cout << a << endl;
    // a += 10;
    // cout << a << endl;
    // a -= 5;
    // cout << a << endl;
    // a *= 3;
    // cout << a << endl;
    // float c = (float)a;
    // c /= 2;
    // cout << c << endl;

}

int main() {
    incrementsDecrements();
    return 0;
}
