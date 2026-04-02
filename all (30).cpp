#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "Введите два вещественных числа: ";
    cin >> a >> b;

    cout << "Максимальное значение: " << (a > b ? a : b) << '\n';

    return 0;
}