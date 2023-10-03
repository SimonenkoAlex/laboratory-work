#define _USE_MATH_DEFINES
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

using namespace std;

// вариант 1 - ЛР 3_2 - Оператор цикла с счетчиком
void variant1() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 0.0f, b = 2 * M_PI;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n);
	dx = fabsf(b - a) / (n - 1);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = sin(x) * cos(x);
		F2 = sin(x) + cos(x) - 1;
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

void select(int position) {
	switch (position) {
	case 0: variant1(); system("cls"); break;
	//case 1: variant2(); system("cls"); break;
	//case 2: variant3(); system("cls"); break;
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
	//case 14: variant15(); system("cls"); break;
	//case 15: variant16(); system("cls"); break;
	//case 16: variant17(); system("cls"); break;
	//case 17: variant18(); system("cls"); break;
	//case 18: variant19(); system("cls"); break;
	//case 19: variant20(); system("cls"); break;
	case 20: exit(0);
	}
}

void resizeConsoleWindow(HANDLE handle, int width, int height) {
	COORD newWindow = { width, height };
	SMALL_RECT srcWindow = { 0, 0, newWindow.X - 1, newWindow.Y - 1 };
	SMALL_RECT minWindow = { 0, 0, 0, 0 };
	SetConsoleWindowInfo(handle, true, &minWindow);
	SetConsoleScreenBufferSize(handle, newWindow);
	SetConsoleWindowInfo(handle, true, &srcWindow);
}

void main() {
	setlocale(LC_CTYPE, "rus");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	resizeConsoleWindow(handle, 100, 50);
	WORD active = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	WORD noActive = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
	char lines[][20] = { "Вариант 1", "Вариант 2", "Вариант 3", "Вариант 4", "Вариант 5",
		"Вариант 6", "Вариант 7", "Вариант 8", "Вариант 9", "Вариант 10", "Вариант 11",
		"Вариант 12", "Вариант 13", "Вариант 14", "Вариант 15", "Вариант 16", "Вариант 17",
		"Вариант 18", "Вариант 19", "Вариант 20", "Выход" };
	COORD coordinate;
	int position = 0, lastItemMenu = 21;
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