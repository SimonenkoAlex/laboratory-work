#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

using namespace std;

void variant1() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 1
	int x;
	printf("Введите любое число x: ");
	scanf_s("%d", &x);
	printf("Остаток от деления на 8:\n ");
	switch (x % 8)
	{
	case 0: printf("НОЛЬ"); break;
	case 1: printf("ОДИН"); break;
	case 2: printf("ДВА"); break;
	case 3: printf("ТРИ"); break;
	case 4: printf("ЧЕТЫРЕ"); break;
	case 5: printf("ПЯТЬ"); break;
	case 6: printf("ШЕСТЬ"); break;
	case 7: printf("СЕМЬ"); break;
	}
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	int x;
	printf("Введите цифру: ");
	scanf_s("%d", &x);
	switch (x)
	{
	case 0: printf("НОЛЬ"); break;
	case 1: printf("ОДИН"); break;
	case 2: printf("ДВА"); break;
	case 3: printf("ТРИ"); break;
	case 4: printf("ЧЕТЫРЕ"); break;
	case 5: printf("ПЯТЬ"); break;
	case 6: printf("ШЕСТЬ"); break;
	case 7: printf("СЕМЬ"); break;
	case 8: printf("ВОСЕМЬ"); break;
	case 9: printf("ДЕВЯТЬ"); break;
	default: printf("Введена не цифра, а число!!!");
	}
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 10
	int x, ost;
	printf("Введите число от 0 до 31: ");
	scanf_s("%d", &x);
	ost = x % 16;
	x /= 16;
	switch (x) {
	case 0: {
		switch (ost)
		{
		case 10: case 11: case 12: case 13: case 14: case 15:
			printf("%X", ost); break;
		default: printf("%d", ost);
		}
	} break;
	case 1: {
		switch (ost)
		{
		case 10: case 11: case 12: case 13: case 14: case 15:
			printf("%d%X", x, ost); break;
		default: printf("%d%d", x, ost);
		}
	} break;
	default: printf("Введенное число НЕ входит в диапазон!");
	}
	_getch();
}

void select(int position) {
	switch (position) {
	case 0: variant1(); system("cls"); break;
	case 1: variant2(); system("cls"); break;
		//case 2: variant3(); system("cls"); break;
		//case 3: variant4(); system("cls"); break;
		//case 4: variant5(); system("cls"); break;
		//case 5: variant6(); system("cls"); break;
		//case 6: variant8(); system("cls"); break;
		//case 7: variant9(); system("cls"); break;
	case 8: variant10(); system("cls"); break;
	case 9: exit(0);
	}
}

void main() {
	setlocale(LC_CTYPE, "rus");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	WORD noActive = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	char lines[][20] = { "Вариант 1", "Вариант 2", "Вариант 3", "Вариант 4 и 7", "Вариант 5",
		"Вариант 6", "Вариант 8", "Вариант 9", "Вариант 10", "Выход" };
	COORD coordinate;
	int position = 0, lastItemMenu = 10;
	char code;
	while (true) {
		system("cls");
		for (int i = 0; i < lastItemMenu; i++) {
			if (position == i)
				SetConsoleTextAttribute(handle, active);
			else
				SetConsoleTextAttribute(handle, noActive);
			coordinate.X = 20; coordinate.Y = 2 + i * 2;
			SetConsoleCursorPosition(handle, coordinate);
			cout << i + 1 << ") " << lines[i] << endl;
		}
		code = _getch();
		if (code == 72) {
			if (position == 0) position = lastItemMenu - 1;
			else position--;
		}
		if (code == 80) {
			if (position == lastItemMenu - 1) position = 0;
			else position++;
		}
		if (code == 13) select(position);
	}
}