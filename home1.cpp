#include <iostream>

using namespace std;


int main() {
    setlocale(LC_ALL, "ru");


    int a, b, c;

    cout << "Введите а: ";
    cin >> a;
    cout << "Введите б: ";
    cin >> b;
    cout << "Введите в: ";
    cin >> c;

    cout << "Сумма: " << a+b+c << endl;
    cout << "Произведение: " << a*b*c << endl;
    cout << "Арифметическое: " << (float)(a+b+c) / 3 << endl;
}