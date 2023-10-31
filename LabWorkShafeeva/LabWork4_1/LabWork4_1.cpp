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
	//system("color 02");
	// вариант 1
	const float a = 0.75f;
	float x, y, S;
	printf("------------------------------\n");
	printf("    X    |    Y    |    S    |\n");
	printf("------------------------------\n");
	x = -1.0f;
	while (x <= 1.0f) 
	{
		printf("%9.2f\n", x);
		y = 1.0f;
		while (y <= 5)
		{
			S = a * exp(-x) * sin(a * x) + sqrt(a * y);
			printf("%18.2f|%9.3f\n", y, S);
			y += 1.5f;
		}
		printf("------------------------------\n");
		x += 0.2f;
	}
	_getch();
}

// ЛР 5_3 - Оператор цикла с постусловием
void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	const float a = 1.9f;
	float x, y, z;
	printf("------------------------------\n");
	printf("    X    |    Y    |    Z    |\n");
	printf("------------------------------\n");
	x = 2.0f;
	do {
		printf("%9.2f\n", x);
		y = -1.0f;
		do {
			z = pow(a * x * pow(y, 2.0f), 1.0f / 5.0f) + 1.3f * sin(x - a);
			printf("%18.2f|%9.3f\n", y, z);
			y += 0.5f;
		} while (y <= 1);
		printf("------------------------------\n");
		x += 0.5f;
	} while (x <= 5.0f);
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 3
	const float a = -2.1f;
	float t, y, S;
	printf("------------------------------\n");
	printf("    T    |    Y    |    S    |\n");
	printf("------------------------------\n");
	t = 1.0f;
	while (t <= 2.0f)
	{
		printf("%9.2f\n", t);
		y = 2.0f;
		while (y <= 3)
		{
			S = sqrt(t + 1) * exp(2 * t * y) * cos(t - a);
			printf("%18.2f|%9.2f\n", y, S);
			y += 0.3f;
		}
		printf("------------------------------\n");
		t += 0.2f;
	}
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	const float b = 3.5f;
	float x, t, z;
	printf("------------------------------\n");
	printf("    X    |    T    |    Z    |\n");
	printf("------------------------------\n");
	x = 1.0f;
	while (x <= 2.0f)
	{
		printf("%9.2f\n", x);
		t = 0.0f;
		while (t <= 1)
		{
			z = b * x * sqrt(t + b) * (t * x + 2.1f);
			printf("%18.2f|%9.2f\n", t, z);
			t += 0.2f;
		}
		printf("------------------------------\n");
		x += 0.2f;
	}
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 5
	float a = 0.5f, x, z;
	printf("------------------------------------\n");
	printf("    A    |    X    |       Z       |\n");
	printf("------------------------------------\n");
	while (a < 1.0f)
	{
		printf("%9.2f\n", a);
		x = 0.0f;
		while (x < 3.7)
		{
			if (x <= 2.0f) z = pow(x, 2) * exp(-pow(x, 2) / 2);
			else z = exp(pow(x, 2) / a) - 1;
			printf("%18.2f|%15.2f\n", x, z);
			x += a / 2.0f;
		}
		printf("------------------------------------\n");
		a += 0.25f;
	}
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 6
	float a = 1.0f, x, y;
	printf("------------------------------\n");
	printf("    A    |    X    |    Y    |\n");
	printf("------------------------------\n");
	while (a < 1.6f)
	{
		printf("%9.2f\n", a);
		x = 0.1f;
		while (x < 1.7f)
		{
			if (x <= 0.4f) y = sin(a * x) - sqrt(log10(pow(a, 2) + pow(x, 2)));
			else if (x > 1.2f) y = 2 - sin(a * x);
			else y = a * pow(cos(a * x), 2);
			printf("%18.2f|%9.2f\n", x, y);
			x += a / 5.0f;
		}
		printf("------------------------------\n");
		a += 0.5f;
	}
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 7
	float a = 1.0f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Z    |\n");
	printf("------------------------------\n");
	while (a < 1.7f)
	{
		printf("%9.2f\n", a);
		x = 0.0f;
		while (x < 3.7)
		{
			if (x <= 2.0f) z = log(a + pow(x, 2) / sqrt(a));
			else z = 2 * exp(2 * x);
			printf("%18.2f|%9.2f\n", x, z);
			x += a / 4.0f;
		}
		printf("------------------------------\n");
		a += 0.3f;
	}
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 8
	float a = 2.0f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Z    |\n");
	printf("------------------------------\n");
	while (a < 2.15f)
	{
		printf("%9.2f\n", a);
		x = 0.1f;
		while (x <= 1.5f)
		{
			if (x < 0.5f) z = a * (exp(x + 2 * a) + exp(-x + 3 * a));
			else if (x == 0.5f) z = sin(x);
			else z = a + a * cos(x + 3 * a);
			printf("%18.2f|%9.2f\n", x, z);
			x += a / 10.0f;
		}
		printf("------------------------------\n");
		a += 0.1f;
	}
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 9
	float a = 1.0f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Z    |\n");
	printf("------------------------------\n");
	while (a < 1.6f)
	{
		printf("%9.2f\n", a);
		x = 0.0f;
		while (x < 4.1)
		{
			if (x <= 3.0f) z = -a * exp(x - 3 * a);
			else z = -a * (1 + log(x - 3 * a));
			printf("%18.2f|%9.2f\n", x, z);
			x += a / 2.0f;
		}
		printf("------------------------------\n");
		a += 0.5f;
	}
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 10
	float a = 0.7f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Z    |\n");
	printf("------------------------------\n");
	while (a < 1.1f)
	{
		printf("%9.2f\n", a);
		x = -1.0f;
		while (x < 1.1)
		{
			if (x <= 0.0f) z = -pow(x + 3 * a, 2) - 2 * a;
			else if (x == 1.0f) z = a * exp(x);
			else z = a * cos(x + 3 * a) - 3 * a;
			printf("%18.2f|%9.2f\n", x, z);
			x += (a + 0.2f) / 2.0f;
		}
		printf("------------------------------\n");
		a += 0.3f;
	}
	_getch();
}

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 11
	float a = 0.5f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Z    |\n");
	printf("------------------------------\n");
	while (a < 1.1f)
	{
		printf("%9.2f\n", a);
		x = 1.0f;
		while (x < 4.1)
		{
			if (x <= 2.5f) z = a * pow(x - a, 3.0f / 2.0f);
			else z = a * (exp(x / 2) + exp(-x / 2)) / 2;
			printf("%18.2f|%9.2f\n", x, z);
			x += a / 2.0f;
		}
		printf("------------------------------\n");
		a += 0.5f;
	}
	_getch();
}

void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 12
	double a = 0.1f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Y    |\n");
	printf("------------------------------\n");
	while (a < 0.35f)
	{
		printf("%9.2f\n", a);
		x = 0.5f;
		while (x < 3.1)
		{
			if (x < 1.5f) z = pow(x, a * pow(x, 2.0f) + 1.0f);
			else if (x == 1.5f) z = a * cos(x);
			else z = pow(a * pow(x, 2.0f) + 1.0f, x);
			printf("%18.2f|%9.2f\n", x, z);
			x += 2.0f * a;
			x = floor(x * 10) / 10;
		}
		printf("------------------------------\n");
		a += 0.1f;
	}
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 13
	double a = 0.1f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Z    |\n");
	printf("------------------------------\n");
	while (a < 0.35f)
	{
		printf("%9.2f\n", a);
		x = 0.1f;
		while (x < 1.0)
		{
			if (x <= 0.5f) z = pow(pow(sin(x), 2) + a, 2) * exp(a * sin(x));
			else z = tanf(x / 4);
			printf("%18.2f|%9.2f\n", x, z);
			x += a;
		}
		printf("------------------------------\n");
		a += 0.1f;
	}
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 14
	double a = 0.5f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Y    |\n");
	printf("------------------------------\n");
	while (a < 1.1f)
	{
		printf("%9.2f\n", a);
		x = 0.0f;
		while (x < 3.1f)
		{
			if (x <= 1.0f) z = tanf(pow(a, 2) + sin(a * x));
			else if (x <= 2.0f) z = a * sin(a - cos(a * x));
			else z = log10f(x);
			printf("%18.2f|%9.2f\n", x, z);
			x += a / 4.0f;
		}
		printf("------------------------------\n");
		a += 0.25f;
	}
	_getch();
}

void variant15() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 15
	double a = 0.1f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Z    |\n");
	printf("------------------------------\n");
	while (a < 1.4f)
	{
		printf("%9.2f\n", a);
		x = 0.5f;
		while (x <= 2.01)
		{
			if (x <= 1.5f) z = exp(cos(x)) - a * pow(sin(a * x), 2);
			else z = a * pow(x, 2) - cos(a * x);
			printf("%18.2f|%9.2f\n", x, z);
			x += a / 4.0f;
		}
		printf("------------------------------\n");
		a += 0.6f;
	}
	_getch();
}

void variant16() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 16
	double a = 1.0f, x, z;
	printf("------------------------------\n");
	printf("    A    |    X    |    Y    |\n");
	printf("------------------------------\n");
	while (a < 1.6f)
	{
		printf("%9.2f\n", a);
		x = 0.1f;
		while (x < 1.6f)
		{
			if (x <= 0.4f) z = 1 / x;
			else if (x <= 1.2f) z = logf(pow(x, 2) + a * x);
			else z = pow(x, 2);
			printf("%18.2f|%9.2f\n", x, z);
			x += a / 5.0f;
		}
		printf("------------------------------\n");
		a += 0.5f;
	}
	_getch();
}

void variant17() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 17
	int x, N = 1;
	printf("Введите %d-ое натуральное число: ", N);
	scanf_s("%d", &x);
	int min = x, minN = 1;
	while (x != 0)
	{
		N++;
		printf("Введите %d-ое натуральное число: ", N);
		scanf_s("%d", &x);
		if (x != 0) {
			if (x < min) {
				min = x;
				minN = N;
			}
		}
	}
	printf("Минимальное число %d с порядковым номером %d\n", min, minN);
	_getch();
}

void variant18() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 18
	double n = 1, N = 1, S = cos(1 / tan(n));
	printf("Последовательность cos(ctg(n)):\n%4.2f, ", S);
	while (S > 0)
	{
		N++; n++;
		S = cos(1 / tan(n));
		printf(" %4.2f, ", S);
	}
	printf("\nПервый отрицательный член последовательности\n%4.2f с номером %3.0f\n", S, N);
	_getch();
}

void variant19() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 19
	int d, f;
	printf("Введите два натуральных числа: ");
	scanf_s("%d%d", &d, &f);
	while (d != 0 && f != 0)
	{
		if (d > f) d = d % f;
		else f = f % d;
	}
	printf("НОД = %d\n", (d + f));
	_getch();
}

void variant20() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 20
	float a, b, c; int N = 0, i = 1;
	printf("Введите %d-ое вещественное число: ", i);
	scanf_s("%f", &a); i++;
	if (a >= 0.f) {
		printf("Введите %d-ое вещественное число: ", i);
		scanf_s("%f", &b);
		while (a >= 0.f && b >= 0.f)
		{
			i++;
			printf("Введите %d-ое вещественное число: ", i);
			scanf_s("%f", &c);
			if (a < b && b > c) N++;
			a = b; b = c;
		}
		printf("Всего чисел больше своих \"соседей\": %d\n", N);
	}
	printf("Так как встречен отрицательный элемент программа закончила работу!!!");
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