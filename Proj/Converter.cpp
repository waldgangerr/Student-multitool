
#include "Begin.h"
#include <conio.h>
#include <iostream>
void Convert() {
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int inp, chos;
    char cont[33], ext;
    cout << "Введите число: ";
    cin >> inp;
    cout << "Введите систему счисления в которой будет отбражено число:" << endl;
    cout << "1. В шестнадцатиречной системе счисления" << endl;
    cout << "2. В десятичной системе счисления" << endl;
    cout << "3. В восьмеричной системе счисления" << endl;
    cout << "4. В двоичной системе счисления" << endl;
    cout << "Операция: ";
    cin >> chos;
    switch (chos) {
    case 1:
        _itoa_s(inp, cont, 16);
        cout << "Ваше число: " << cont << endl;
        break;
    case 2:
        _itoa_s(inp, cont, 10);
        cout << "Ваше число: " << cont << endl;
        break;
    case 3:
        _itoa_s(inp, cont, 8);
        cout << "Ваше число: " << cont << endl;
        break;
    case 4:
        _itoa_s(inp, cont, 2);
        cout << "Ваше число: " << cont << endl;
        break;
    }
    cout << "Введите exit для выхода или r для очистки поля" << endl;
    cin >> ext;
    if (ext == 'r') {
        system("cls");
        Convert();
    }
}

