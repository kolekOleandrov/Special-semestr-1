#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите трехзначное число: ";
    cin >> n;
    
    int d1 = n / 100;        // первая цифра
    int d2 = (n / 10) % 10;  // вторая цифра
    
    if (d1 > d2) {
        cout << "Первая цифра больше" << endl;
    } else {
        cout << "Вторая цифра больше" << endl;
    }
    
    return 0;
}