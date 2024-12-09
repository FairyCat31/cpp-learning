#include <iostream>


using namespace std;

// int main() {
//     setlocale(LC_ALL, "ru");

//     int num;
//     cout << "Введите число > ";
//     cin >> num;


//     if (num > 5) {
//         cout << "num more than 5" << endl;
//     } else if (num < 5) {
//         cout << "num less than 5" << endl;
//     } else {
//         cout << "num is equal 5" << endl;
//     }
// }

int main() {
    setlocale(LC_ALL, "ru");


    int a;
    cin >> a;

    switch (a) 
    {
    case 1:
        cout << "Num is 1" << endl;
        break;
    case 2:
        cout << "Num is 2" << endl;
        break;
    default:
        cout << "Num is not valid" << endl;
        break;
    }
}