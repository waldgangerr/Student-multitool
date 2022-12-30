#include "Begin.h"
#include <iostream>
using namespace std;
void Game() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int number = rand() % 2000 + 1,
		countOfHelp = 6,
		enterNumber,
		countTry = 3,
		help,
		n;
	bool active = false;
	cout << "Здравствуйте, я загадал число от 1 до 2000, попробуйте отгадать его!\n";
	while (true) {
		cout << "\nВыберите пункт меню:\n1) Написать число!(У вас " << countTry << " попыток)\n2) Подсказки(" << countOfHelp << ")\n3) Сдаться!\n"; cin >> n;
		switch (n) {
		case 1:
			countTry--;
			cout << "Введите число, которое, на ваш взгляд, является загаданным компьютером: "; cin >> enterNumber;
			if (enterNumber == number) {
				cout << "Поздравляю вы угадали число!";
				active = true;
			}
			else
				cout << "Это не то число! Попробуйте дальше!\n";
			break;
		case 2:
			if (countOfHelp == 0) {
				cout << "у вас нет подсказок!\n";
				break;
			}
			countOfHelp--;
			cout << "Выберите, какого рода подсказка вам нужна:\n1) Это число делится на\n2) Это число больше числа\n3) Это число меньше числа\n4) Узнать диапазон\n5) Узнать число второго разряда, если он есть\n";
			cin >> help;
			switch (help) {
			case 1:
				int number2;
				cout << "Введите число, на которое, вы думаете, делится загаданное число: "; cin >> number2;
				if (number % number2 == 0)
					cout << "Это число делится на " << number2 << endl;
				else
					cout << "Нет, оно не делится на " << number2 << endl;
				break;
			case 2:
				int number3;
				cout << "Введите число и я скажу, больше ли оно задуманного! "; cin >> number3;
				if (number3 > number)
					cout << number3 << " больше задуманного!\n";
				else
					cout << number3 << " не больше задуманного числа\n";
				break;
			case 3:
				int number4;
				cout << "Введите число и я скажу, меньше ли оно задуманного!"; cin >> number4;
				if (number4 < number)
					cout << number4 << " меньше задуманного!\n";
				else
					cout << number4 << " не меньше задуманного числа\n";
				break;
			case 4:
				if (number < 50)
					cout << "Это число от 0 до  " << number + rand() % 50 + 50;
				else
					cout << "Это число от " << number - rand() % 50 - 20 << " до " << number + rand() % 50 + 20 << endl;
				break;
			case 5:
				if (number >= 10)
					cout << "Цифра разряда десятых - это " << (number / 10) % 10 << endl;
				else
					cout << "Число меньше 10" << endl;
				break;
			}
			break;
		case 3:
			cout << "Вы сдались! задуманного число было " << number << endl;
			active = true;
			break;
		default:

			break;
		}
		if (countTry == 0) {
			active = true;
			cout << "Game Over! Число было " << number << endl;
		}
		if (active) {
			break;
		}
	}
}