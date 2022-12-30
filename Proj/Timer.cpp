//Пример таймера
#include "Begin.h"
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;

int Timer() 
{
    setlocale(LC_ALL, "Russian");
    int hours = 0, minutes = 0, seconds = 0, hours2, minutes2, seconds2;
    cout << "установите таймер(часы минуты секунды): ";
    cin >> hours2 >> minutes2 >> seconds2;
    while (true) {
        cout << hours << ":" << minutes << ":" << seconds;
        seconds++;
        if (seconds == 60) {
            seconds = 0;
            minutes++;
        }
        if (minutes == 60) {
            minutes = 0;
            hours++;
        }
        if (hours == hours2 && minutes == minutes2 && seconds == seconds2 + 1)
            break;
        this_thread::sleep_for(0.999s);
        system("cls");
    }
    cout << endl << "время вышло!";
    return 0;
}