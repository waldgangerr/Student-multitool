#include "Begin.h"
#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	setlocale (LC_CTYPE, "Russian");
	cout << "Добро пожаловать!\nБлагодарим за использование нащей программы!\n";
	cout << "Вот перечень возможных функций: \n";
	cout << "1) Конвертер чисел(Дмитрий Лях)\n";
	cout << "2) Игра 'Угадай число'(Вероника Стрелковская)\n";
	cout << "3) Календарь(Дарья Глухова)\n";
	cout << "4) Таймер(Валерия Рудяк)\n";
	cout << "5) Калькулятор(Андрей Тивончик)\n";

start:

	cout << "Выберите функцию: ";
	int func = _getch() - '0';
	cout << func;
	switch (func) {
	case 1: {
		system("cls");
		Convert();

	}break;

	case 2: {
		system("cls");
		Game();
	}break;

	case 3: {
		system("cls");
		smth();
	}break;

	case 4: {
		system("cls");
		Timer();
	}break;

	case 5: {
		system("cls");
		Calc();

	}break;

	default: {
		cout << "Такого модуля нет. Выберите другой. ";
		goto start;
	} break;
	}

	return 0;
}