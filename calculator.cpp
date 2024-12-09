#include <iostream>


using namespace std;


int main() {
    setlocale(LC_ALL, "ru");
    int a, b;
    char math_operator;

    
    
    cout << "Введите два числа" << endl;
    cin >> a >> b;
    cout << "Введите действие" << endl;
    cin >> math_operator;


    switch (math_operator) {
        case '-':
            cout << a-b << endl;
            break;
        case '+':
            cout << a+b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << (float)a/b << endl;
            break;
        default:
            cout << "Unknowm math operation" << endl;
    }
}