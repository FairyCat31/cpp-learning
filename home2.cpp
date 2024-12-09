#include <iostream>


using namespace std;


int main() {
    int num;
    cout << "Введите число > ";
    cin >> num;

    if (num % 2) {
        cout << "Число " << num << " нечетное" << endl;
    } else {
        cout << "Число " << num << " четное" << endl;
    }
}