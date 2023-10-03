#define _USE_MATH_DEFINES

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

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	float y = 0.0f, x;
	printf("Введите значение переменной x: ");
	scanf_s("%f", &x);
	for (int i = 1; i < 18; i += 2) {
		y += x / i;
		printf("Шаг %2d : Y = %6.3f\n", i, y);
	}
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 5
	int y = 1, n;
	printf("Введите значение переменной n: ");
	scanf_s("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		y *= i;
		printf("Шаг %2d : Y = %d\n", i, y);
	}
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 6
	float y = 0.0f;
	for (int i = 0; i < 11; i++) {
		y += pow(3, i);
		printf("Шаг %2d : Y = %.0f\n", i, y);
	}
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 7
	float y = 0.0f; int x;
	printf("Введите значение переменной x: ");
	scanf_s("%d", &x);
	for (int i = 5; i < 21; i++) {
		y += pow(x, 2) / (2 * i - 1);
		printf("Шаг %2d : Y = %6.3f\n", i, y);
	}
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 8
	float y = 1.0f; int x;
	printf("Введите значение переменной x: ");
	scanf_s("%d", &x);
	for (int i = 2; i < 11; i++) {
		y *= (float) (x + i) / i;
		printf("Шаг %2d : Y = %6.3f\n", i, y);
	}
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 9
	float y = 0.0f; int x;
	printf("Введите значение переменной x: ");
	scanf_s("%d", &x);
	for (int i = 1; i < 16; i++) {
		y += (float) pow(x, 2) / i;
		printf("Шаг %2d : Y = %6.3f\n", i, y);
	}
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 10
	float y = 1.0f; int x;
	printf("Введите значение переменной x: ");
	scanf_s("%d", &x);
	for (int i = 1; i < 10; i++) {
		y += (float)pow(x, i) / (2 * i);
		printf("Шаг %2d : Y = %6.3f\n", i, y);
	}
	_getch();
}

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 11
	float y = 1.0f; int x, n;
	printf("Введите значение переменной x: ");
	scanf_s("%d", &x);
	for (int i = 1; i < 11; i++) {
		n = 1;
		for (int j = 1; j < i + 1; j++)
			n *= j; // факториал
		y += (float) pow(x, 2 * i) / n;
		printf("Шаг %2d : Y = %6.3f\n", i, y);
	}
	_getch();
}

void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 12
	float y = 1.0f; int x, n;
	printf("Введите значение переменной x: ");
	scanf_s("%d", &x);
	for (int i = 1; i < 7; i++) {
		n = 1;
		for (int j = 1; j < (2 * i - 1); j++)
			n *= j; // факториал
		y += (float) pow(-1, i) * pow(x, 2 * i - 1) / n;
		printf("Шаг %2d : Y = %6.3f\n", i, y);
	}
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 13
	float e = 1.0f, EXP = exp(1.0f); int n, nn;
	printf("Введите значение переменной n: ");
	scanf_s("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		nn = 1;
		for (int j = 1; j < i + 1; j++)
			nn *= j; // факториал
		e += (float) 1 / nn;
	}
	printf("За %2d шагов e = %8.5f\tEXP(1) = %8.5f\n", n, e, EXP);
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 14
	float pi = 0.0f; int n;
	printf("Введите значение переменной n: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n + 1; i++) {
		pi += (float) pow(-1, i) / (2 * i + 1);
	}
	pi *= 4.0f;
	printf("За %2d шагов pi = %8.5f\tM_PI = %8.5f\n", n, pi, M_PI);
	_getch();
}

void variant15() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 15
	float y = 0.0f, x; int n;
	do {
		system("cls");
		printf("Введите значение переменной x и n (|x| < 1): ");
		scanf_s("%f%d", &x, &n);
	} while (fabsf(x) >= 1);
	float arctg = atan(x);
	for (int i = 0; i < n + 1; i++) {
		y += (float)pow(-1.0f, i) * pow(x, 2.0f * i + 1.0f) / (2.0f * i + 1.0f);
	}
	printf("Y = %8.5f\tarctg(x) = %8.5f\n", y, arctg);
	_getch();
}

void variant16() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 16
	float z = 0.0f, x; int n;
	do {
		system("cls");
		printf("Введите значение переменной x и n (|x| < 1): ");
		scanf_s("%f%d", &x, &n);
	} while (fabsf(x) >= 1);
	float LN = logf(1.0f + x);
	for (int i = 1; i < n + 1; i++) {
		z += (float)pow(-1.0f, i - 1) * pow(x, i) / i;
	}
	printf("Z = %8.5f\tLN(1+x) = %8.5f\n", z, LN);
	_getch();
}

void variant17() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 17
	float S = 0.0f; int x, n, nn;
	printf("Введите значение переменной x и n: ");
	scanf_s("%d%d", &x, &n);
	for (int i = 0; i < n; i++) {
		nn = 1;
		for (int j = 1; j < (2 * i + 1); j++)
			nn *= j; // факториал
		S += (float)pow(-1, i) * pow(x, 2 * i + 1) / nn;
		printf("Шаг %2d : S = %6.3f\n", i + 1, S);
	}
	_getch();
}

void variant18() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 18
	float z, Sp = 0.0f, Sn = 0.0f, x, a;
	printf("Введите значение переменной x и a: ");
	scanf_s("%f%f", &x, &a);
	for (int n = 1; n < 6; n++) {
		z = cos(n * x + a) * sin(n * x - a);
		printf("Для n = %d : z = %6.3f\n", n, z);
		if (z < 0) Sn += z;
		else Sp += z;
	}
	printf("Сумма положительных значений S = %6.3f\n", Sp);
	printf("Сумма отрицательных значений S = %6.3f\n", Sn);
	_getch();
}

void variant19() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 19
	int Sp = 0, Sn = 0, N;
	printf("Введите значение переменной N: ");
	scanf_s("%d", &N);
	for (int i = 1; i < N + 1; i++) {
		if (i % 2 != 0) Sn += i;
		else Sp += i;
	}
	printf("Сумма четных чисел натурального ряда до %d S = %4d\n", N, Sp);
	printf("Сумма нечетных чисел натурального ряда до %d S = %4d\n", N, Sn);
	_getch();
}

void variant20() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 20
	int M = 0, n, nn;
	printf("Введите значение переменной n: ");
	scanf_s("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		nn = 1;
		for (int j = 1; j < i + 1; j++)
			nn *= j; // факториал
		M += nn;
		printf("Шаг %2d : S = %d\n", i, M);
	}
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