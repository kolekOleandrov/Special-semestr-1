#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите двухзначное число: ";
    cin >> n;
    
    int d1 = n / 10;           // первая цифра
    int d2 = n % 10;           // вторая цифра
    int s = d1 + d2;           // сумма цифр
    
    if (s % 3 == 0)
    {
        cout << "Сумма цифр кратна 3" << endl;
    } else 
    {
        cout << "Сумма цифр не кратна 3" << endl;
    }
    
    return 0;
}
