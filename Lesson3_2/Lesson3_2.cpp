
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int firstNumber;
    int secondNumber;
    int sum;
    cout << "Введите первое число: ";
      cin >> firstNumber;
      cout << "Введите второе число: ";
      cin >> secondNumber;
      cout << "Введите их сумму: ";
      cin >> sum;
    cout << "-----Проверяем----- \n";
    if (firstNumber + secondNumber == sum) {
        cout << "Верно! Забери пирожок в ванной ";
    }
    else {
        cout << "Ошибка! Поэтому пирожок съем я \n";
        cout << "Верный ответ:" << firstNumber + secondNumber;
    }
}

