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
	scanf_s("%d", &n); // 20
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

// вариант 2 - ЛР 4_2 - Оператор цикла с предусловием
void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 1.0f, b = 2.0f;
	int n, i = 1; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 18
	dx = fabsf(b - a) / (n - 1.0f);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	while (i <= n) {
		F1 = 1.0f + pow(2.0f, x + 5.0f);
		F2 = pow(x - 1.0f, 3.0f);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx; i++;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 3 - ЛР 5_1 - Оператор цикла с постусловием
void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = -1.0f, b = 5.0f;
	int n, i = 1; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 15
	dx = fabsf(b - a) / (n - 1.0f);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	do {
		F1 = 4.0f * exp(-fabsf(x)) - 1.0f;
		F2 = cos(x);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx; i++;
	} while (i <= n);
	printf(" _______________________________ \n");
	_getch();
}

// вариант 4 - ЛР 6_2 - Одномерные массивы
void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = -2.0f, b = 5; int n;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 14
	float *x = new float[n]; 
	float *F1 = new float[n];
	float *F2 = new float[n];
	float dx = fabsf(b - a) / (n - 1);
	x[0] = a;
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 0; i < n; i++) {
		F1[i] = pow(fabsf(x[i] + 10), 5);
		F2[i] = exp(-(x[i] + 5));
		printf("|%3d|%9.3f|%8.0f|%8.4f|\n", i, x[i], F1[i], F2[i]);
		x[i + 1] = x[i] + dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 5
void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 0.0f, b = M_PI;
	const int n = 16; int i = 0; 
	float x[n+1], dx, F1[n], F2[n];
	dx = fabsf(b - a) / (n - 1.0f);
	x[0] = a;
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	while (i < n) {
		F1[i] = 2 * sin(2 * x[i]) + 1;
		F2[i] = pow(x[i] + 5, 3) * (1 + pow(sin(x[i]), 2));
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x[i], F1[i], F2[i]);
		x[i + 1] = x[i] + dx; i++;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 6
void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = -M_PI, b = M_PI;
	const int n = 20; int i = 0;
	float x[n + 1], dx, F1[n], F2[n];
	dx = fabsf(b - a) / (n - 1.0f);
	x[0] = a;
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	do {
		F1[i] = 2.0f - cos(x[i]);
		F2[i] = sqrt(x[i] + 4.0f);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x[i], F1[i], F2[i]);
		x[i + 1] = x[i] + dx; i++;
	} while (i < n);
	printf(" _______________________________ \n");
	_getch();
}

// вариант 7 - ЛР 7_3 - Двумерные массивы
void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = -1.0f, b = 3.0f;
	const int n = 20; int i = 0;
	float dx, mass[3][n+1];
	dx = fabsf(b - a) / (n - 1);
	mass[0][0] = a;
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 0; i < n; i++) {
		mass[1][i] = pow(2.0f, -mass[0][i]) / 100;
		mass[2][i] = 20 / (1.0f + pow(mass[0][i], 2.0f));
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, mass[0][i], mass[1][i], mass[2][i]);
		mass[0][i + 1] = mass[0][i] + dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 8
void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = -4.0f, b = 4.0f;
	const int n = 12; int i = 0;
	float dx, mass[3][n + 1];
	dx = fabsf(b - a) / (n - 1);
	mass[0][0] = a;
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	while (i < n) {
		mass[1][i] = pow(mass[0][i], 3) * exp(2.0f * mass[0][i]);
		mass[2][i] = exp(mass[0][i]) * sin(mass[0][i]);
		printf("|%3d|%9.3f|%8.1f|%8.4f|\n", i, mass[0][i], mass[1][i], mass[2][i]);
		mass[0][i + 1] = mass[0][i] + dx; i++;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 9
void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 1.0f, b = 3.0f;
	const int n = 15; int i = 0;
	float dx, mass[3][n + 1];
	dx = fabsf(b - a) / (n - 1);
	mass[0][0] = a;
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	do {
		mass[1][i] = sqrt(exp(mass[0][i]) - 1);
		mass[2][i] = mass[0][i] * pow(logf(mass[0][i]), 2);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i + 1, mass[0][i], mass[1][i], mass[2][i]);
		mass[0][i + 1] = mass[0][i] + dx; i++;
	} while (i < n);
	printf(" _______________________________ \n");
	_getch();
}

// вариант 10
void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const double a = 1.0f, b = 4.0f;
	int n; double x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 20
	dx = fabsf(b - a) / (n - 1);
	cout << " _______________________________ " << endl;
	cout << "| I |    X    |   F1   |   F2   |" << endl;
	cout << "|---|---------|--------|--------|" << endl;
	for (int i = 1; i <= n; i++) {
		F1 = 1 / (1 + sqrt(x));
		F2 = pow(2, x) / (1 - pow(4, x));
		cout << "|"; cout.width(3); cout << i;
		cout << "|"; cout.width(9); cout.precision(3); cout << x;
		cout << "|"; cout.width(8); cout.precision(3); cout << F1;
		cout << "|"; cout.width(8); cout.precision(3); cout << F2 << "|" << endl;
		x += dx;
	}
	cout << " _______________________________ " << endl;
	_getch();
}

// вариант 11
void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 0.0f, b = 2.0f * M_PI;
	int n, i = 1; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 20
	dx = fabsf(b - a) / (n - 1.0f);
	cout << " _______________________________ " << endl;
	cout << "| I |    X    |   F1   |   F2   |" << endl;
	cout << "|---|---------|--------|--------|" << endl;
	while (i <= n) {
		F1 = 5.0f - 3.0f * cos(x);
		F2 = sqrt(1 + pow(sin(x), 2));
		cout << "|"; cout.width(3); cout << i;
		cout << "|"; cout.width(9); cout.precision(3); cout << x;
		cout << "|"; cout.width(8); cout.precision(3); cout << F1;
		cout << "|"; cout.width(8); cout.precision(3); cout << F2 << "|" << endl;
		x += dx; i++;
	}
	cout << " _______________________________ " << endl;
	_getch();
}

// вариант 12
void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = -M_PI, b = M_PI;
	int n, i = 1; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 20
	dx = fabsf(b - a) / (n - 1.0f);
	cout << " _______________________________ " << endl;
	cout << "| I |    X    |   F1   |   F2   |" << endl;
	cout << "|---|---------|--------|--------|" << endl;
	do {
		F1 = fabsf(sin(x)) + fabsf(cos(x));
		F2 = fabsf(sin(x)) - fabsf(cos(x));
		cout << "|"; cout.width(3); cout << i;
		cout << "|"; cout.width(9); cout.precision(3); cout << x;
		cout << "|"; cout.width(8); cout.precision(3); cout << F1;
		cout << "|"; cout.width(8); cout.precision(3); cout << F2 << "|" << endl;
		x += dx; i++;
	} while (i <= n);
	cout << " _______________________________ " << endl;
	_getch();
}

// вариант 13
void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 0.0f, b = M_PI;
	int n; float dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 20
	dx = fabsf(b - a) / (n - 1);
	printf(" ___________________________ \n");
	printf("|    X    |   F1   |   F2   |\n");
	printf("|---------|--------|--------|\n");
	for (float x = a; x < b + dx / 2; x+=dx) {
		F1 = exp(-x) + cos(2 * x);
		F2 = exp(-2 * x);
		printf("|%9.3f|%8.4f|%8.4f|\n", x, F1, F2);
	}
	printf(" ___________________________ \n");
	_getch();
}

// вариант 14
void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 1.0f, b = 2.0f;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 18
	dx = fabsf(b - a) / (n - 1);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = exp(-x) * log10(sqrt(x + 1));
		F2 = x + sin(x);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 15
void variant15() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 2.0f, b = 4.0f;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 16
	dx = fabsf(b - a) / (n - 1);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = x * cos(x / 2);
		F2 = pow(x, 1.0f / 3.0f) + sqrt(2) * exp(-x);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 16
void variant16() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 2.0f, b = 4.0f;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 12
	dx = fabsf(b - a) / (n - 1);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = pow(2, x) * log10(x) - pow(3, x) * log10(x);
		F2 = 1 / tanf(x);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 17
void variant17() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 0.0f, b = 5.0f;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 12
	dx = fabsf(b - a) / (n - 1);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = pow(3, -x) / 50;
		F2 = x * exp(-x) + log(x);
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 18
void variant18() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 1.0f, b = 2.0f;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 10
	dx = fabsf(b - a) / (n - 1);
	printf(" _______________________________ \n");
	printf("| I |    X    |   F1   |   F2   |\n");
	printf("|---|---------|--------|--------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = exp(2 * x) * pow(x, 1.0f / 3.0f) - sin(x);
		F2 = 10 / (2 + pow(x, 2));
		printf("|%3d|%9.3f|%8.4f|%8.4f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _______________________________ \n");
	_getch();
}

// вариант 19
void variant19() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 3.0f, b = 4.0f;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 16
	dx = fabsf(b - a) / (n - 1);
	printf(" _________________________________ \n");
	printf("| I |    X    |   F1   |    F2    |\n");
	printf("|---|---------|--------|----------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = pow(2, x) * atanf(x);
		F2 = exp(a * x);
		printf("|%3d|%9.3f|%8.4f|%10.3f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _________________________________ \n");
	_getch();
}

// вариант 20
void variant20() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	const float a = 1.0f, b = 3.0f;
	int n; float x = a, dx, F1, F2;
	printf("Введите число точек: ");
	scanf_s("%d", &n); // 18
	dx = fabsf(b - a) / (n - 1);
	printf(" _________________________________ \n");
	printf("| I |    X    |   F1   |    F2    |\n");
	printf("|---|---------|--------|----------|\n");
	for (int i = 1; i <= n; i++) {
		F1 = pow(x + 1, 1.0f / 5.0f);
		F2 = exp(2 * x) * log10(x) - pow(3, 3 * x);
		printf("|%3d|%9.3f|%8.4f|%10.3f|\n", i, x, F1, F2);
		x += dx;
	}
	printf(" _________________________________ \n");
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
	case 6: variant7(); system("cls"); break;
	case 7: variant8(); system("cls"); break;
	case 8: variant9(); system("cls"); break;
	case 9: variant10(); system("cls"); break;
	case 10: variant11(); system("cls"); break;
	case 11: variant12(); system("cls"); break;
	case 12: variant13(); system("cls"); break;
	case 13: variant14(); system("cls"); break;
	case 14: variant15(); system("cls"); break;
	case 15: variant16(); system("cls"); break;
	case 16: variant17(); system("cls"); break;
	case 17: variant18(); system("cls"); break;
	case 18: variant19(); system("cls"); break;
	case 19: variant20(); system("cls"); break;
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