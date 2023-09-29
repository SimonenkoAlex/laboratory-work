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
	float t = 0, a = 0.5, b = 2, z;
	//printf("Введите t от 0 до 3: ");
	//scanf_s("%f", &t);
	do {
		if (t < 1) z = 1;
		else if (t > 2) z = expf(a * t) * cos(b * t);
		else z = a * pow(t, 2) * log(t);
		printf("При t = %4.1f\tz = %6.3f\n", t, z);
		t += 0.1;
	} while (t <= 3);
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	double x = 0.0, a = 2.3, f;
	//printf("Введите t от 0 до 4: ");
	//scanf_s("%f", &t);
	do {
		f = (x > 2)? pow(x + a, 1.0 / 5.0) : (x <= 0.3)? cos(x - a) : x;
		printf("При x = %4.1f\tf = %6.3f\n", x, f);
		x += 0.2;
	} while (x <= 4);
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 3
	float x = 0, a = 2.7, b = 0.27, z;
	//printf("Введите t от 0 до 7: ");
	//scanf_s("%f", &t);
	do {
		if (x < 2.3) z = (a + b) / (expf(x) + cos(x));
		else if (x >= 5) z = expf(x) + sin(x);
		else z = (a + b) / (x + 1);
		printf("При x = %4.1f\tz = %6.3f\n", x, z);
		x += 0.3;
	} while (x <= 7);
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	double i = 7, a = 2.2, b = 0.3, y;
	//printf("Введите t от 7 до 12: ");
	//scanf_s("%f", &i);
	do {
		y = (i < 10) ? a * pow(i, 4.0) + b * i : (i == 10) ? tan(i + 0.5) : exp(2.0 * i) + sqrt(pow(a, 2.0) + pow(i, 2.0));
		printf("При i = %4.1f\ty = %6.3f\n", i, y);
		i = floor((i + 0.2) * 10) / 10;
	} while (i <= 12);
	_getch();
}

#define PI 3.1413

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 5
	float x = 0.9, a = 1.5, y;
	//printf("Введите t от 0 до 7: ");
	//scanf_s("%f", &t);
	do {
		if (x < 1.3) y = PI * pow(x, 2) - 7 / pow(x, 2);
		else if (x >= 3) y = log10(x + 7 * sqrt(x));
		else y = a * pow(x, 3) + 7 * sqrt(x);
		printf("При x = %4.1f\ty = %6.3f\n", x, y);
		x = floor((x + 0.2) * 10) / 10;
	} while (x <= 5);
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 6
	double t = -1, a = 2.1, b = 0.37, z;
	//printf("Введите t от 7 до 12: ");
	//scanf_s("%f", &i);
	do {
		z = (t < 0.1) ? sqrt(a * pow(t, 2) + b * sin(t) + 1) : (t >= 2) ? sqrt(a * pow(t, 2) + b * cos(t) + 1) : a * t + b;
		printf("При t = %4.1f\tz = %6.3f\n", t, z);
		t = floor((t + 0.2) * 10) / 10;
	} while (t <= 4);
	_getch();
}

void select(int position) {
	switch (position) {
	case 0: variant1(); system("cls"); break;
	case 1: variant2(); system("cls"); break;
	case 2: variant3(); system("cls"); break;
	case 3: variant4(); system("cls"); break;
	case 4: variant5(); system("cls"); break;
	case 5: variant6(); system("cls"); break;
	//case 6: variant7(); system("cls"); break;
	//case 7: variant8(); system("cls"); break;
	//case 8: variant9(); system("cls"); break;
	//case 9: variant10(); system("cls"); break;
	case 10: exit(0);
	}
}

void main() {
	setlocale(LC_CTYPE, "rus");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	WORD noActive = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	char lines[][20] = { "Вариант 1", "Вариант 2", "Вариант 3", "Вариант 4", "Вариант 5",
		"Вариант 6", "Вариант 7", "Вариант 8", "Вариант 9", "Вариант 10", "Выход" };
	COORD coordinate;
	int position = 0, lastItemMenu = 11;
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