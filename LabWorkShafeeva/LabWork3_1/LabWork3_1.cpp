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
	float x = 0.0f;
	for (int i = 1; i <= 10; i++) {
		x += 1.0f / i;
		printf("Шаг %2d : X = %6.2f\n", i, x);
	}
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	double z = 1;
	for (int i = 1; i <= 10; i++) {
		z *= 2 * i;
		printf("Шаг %2d : Z = %.0f\n", i, z);
	}
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 3
	float y = 0.0f, x;
	printf("Введите значение переменной x: ");
	scanf_s("%f", &x);
	for (int i = 1; i < 10; i++) {
		y += pow(-1.0f, i) * pow(i, 2.0f) * x;
		printf("Шаг %2d : Y = %.0f\n", i, y);
	}
	_getch();
}

void select(int position) {
	switch (position) {
	case 0: variant1(); system("cls"); break;
	case 1: variant2(); system("cls"); break;
	case 2: variant3(); system("cls"); break;
	//case 3: variant4(); system("cls"); break;
	//case 4: variant5(); system("cls"); break;
	//case 5: variant6(); system("cls"); break;
	//case 6: variant7(); system("cls"); break;
	//case 7: variant8(); system("cls"); break;
	//case 8: variant9(); system("cls"); break;
	//case 9: variant10(); system("cls"); break;
	//case 10: variant11(); system("cls"); break;
	//case 11: variant12(); system("cls"); break;
	//case 12: variant13(); system("cls"); break;
	//case 13: variant14(); system("cls"); break;
	case 14: exit(0);
	}
}

void main() {
	setlocale(LC_CTYPE, "rus");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	WORD noActive = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	char lines[][20] = { "Вариант 1", "Вариант 2", "Вариант 3", "Вариант 4", "Вариант 5",
		"Вариант 6", "Вариант 7", "Вариант 8", "Вариант 9", "Вариант 10", "Вариант 11",
		"Вариант 12", "Вариант 13", "Вариант 14", "Выход" };
	COORD coordinate;
	int position = 0, lastItemMenu = 15;
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