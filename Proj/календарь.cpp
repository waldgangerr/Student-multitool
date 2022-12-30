#include "Begin.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int getInputDays()
{
    setlocale(LC_ALL, "RUS");
    int inputDays = 0;
    bool validInput = false;
    while (validInput == false)
    {
        cout << "\n Количество дней в месяце: ";
        cin >> inputDays;

        if (inputDays == 28 || inputDays == 31 || inputDays == 30) {
            validInput = true;
        }
        else {
            cout << "\n Неверное значение!";
        }
        
    }
    return inputDays;
}

int getInputOffset()
{
    setlocale(LC_ALL, "RUS");
    int inputOffset = 0;
    bool validInput = false;
    while (validInput == false)
    {
        cout << "\n День недели первого дня месяца (0 для Понедельника - 6 для Воскресенья): ";
        cin >> inputOffset;

        if (inputOffset >= 0 && inputOffset <= 6)
            validInput = true;
    }

    if (inputOffset == 6)
        inputOffset = 0;
    else
        inputOffset += 1;
    return inputOffset;
}

void displayOffset(int offset)
{
    if (offset == 1)
        cout << "       1";
    else if (offset == 2)
        cout << "           1";
    else if (offset == 3)
        cout << "              1";
    else if (offset == 4)
        cout << "                   1";
    else if (offset == 5)
        cout << "                       1";
    else
        cout << "                           1";
}

void drawCalendar(int days, int offset)
{
    setlocale(LC_ALL, "RUS");
    int date = 1;
    int spaces = 0;
    cout << "\n\n\t К А Л Е Н Д А Р Ь\n\n  Вс  Пн  Вт  Ср  Чт  Пт  Сб" << endl;
    while (date <= days)
    {
        if (offset > 0)
        {
            displayOffset(offset);
            date = 2;
            spaces = (offset * 4) + 4;
            offset = 0;
        }
        while (spaces < 28)
        {
            if (date >= 10)
            {
                if (date > days)
                    break;
                cout << "  " << date;
            }
            else
                cout << "   " << date;
            date += 1;
            spaces += 4;
        }
        cout << endl;
        spaces = 0;
    }
}


int smth()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int days = getInputDays();
    int offset = getInputOffset();
    drawCalendar(days, offset);

    int dayReminder;
    char remiderMes[100];
    setlocale(LC_ALL, "RUS");
    cout << "Введите день: ";
    cin >> dayReminder;
    cout << "Ввeдите напоминание: ";
    cin >> remiderMes;

    cout << "\n\n";
    cout << "\n==================Напоминание=====================\n";
    cout << "День:" << dayReminder;
    cout << "\nНапоминание: " << remiderMes;
    cout << endl;

    return 0;
}
