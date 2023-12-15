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
	int N[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	float S = 1.f;
	for (int i = 0; i < 12; i++) {
		S *= N[i];
	}
	printf("Среднее геометрическое S = %.3f\n", sqrt(S));
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	int N[12] = { 5, -2, 8, -4, 10, -6, 2, 9, 1, -10, 6, 7 };
	int max = N[0];
	for (int i = 1; i < 12; i++) {
		if (N[i] > max) max = N[i];
	}
	printf("Максимальное значение MAX = %d\n", max);
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 3
	int N[20] = { -9, 11, -7, -6, -5, 8, -3, 16, -1, 0, 1, 2, 12, 4, 5, 6, -8, 8, 9, 10 };
	float S = 0.f;
	for (int i = 0; i < 20; i++) {
		S += N[i];
	}
	printf("Среднее арифметическое S = %.3f\n", (S / 20));
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	float N[12] = { 1.2, 2.5, 3.11, -1.4, 2.45, 1.8, -3.21, 10.1, -9.0, 5.7, 4.8, -7.7 };
	int x, n = 0;
	printf("Введите целое число X: ");
	scanf_s("%d", &x);
	printf("Массив вещественных чисел:\n");
	for (int i = 0; i < 12; i++) {
		printf("%.2f, ", N[i]);
		if (x == roundf(N[i])) n = i;
	}
	printf("\nНомер наиболее близкого к X = %d\n", n + 1);
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 5
	int N[15] = { 1, 2, -3, -1, 12, 8, -4, -3, -9, 5, 48, 7, -7, 10, 26 };
	int max = 0, n = 0, m = 0;
	printf("Массив целых чисел:\n");
	for (int i = 0; i < 15; i++) {
		printf("%d, ", N[i]);
		if (N[i] < 0) {
			n++; // общее количество отрицательных чисел
			m++; // количество подряд следующих отрицательных чисел
		}
		if (N[i] > 0 || i == 14) {
			if (m > max) max = m;
			m = 0;
		}
	}
	printf("\nКоличество отерицательных чисел = %d\n", n);
	printf("\nМаксимальное число подряд следующих отрицательных числе = %d\n", max);
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 6
	int N[15] = { 1, 2, -3, -1, 12, 8, -4, 26, -9, 5, 26, 7, -7, 10, 26 };
	int max = 0, n = 0;
	printf("Массив целых чисел:\n");
	for (int i = 0; i < 15; i++) {
		printf("%d, ", N[i]);
		max = fmax(max, N[i]);
	}
	printf("\nМаксимальное число = %d\n", max);
	for (int i = 0; i < 15; i++) {
		if (max == N[i]) n++;
	}
	printf("\nКоличество максимального числа = %d\n", n);
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 7
	const int n = 15;
	float x[n] = { 1.2, 2.5, -3.0, -1.6, 12.34, 8.9, -4.05, 26.7, -9.0, 5.11, 6.8, 7.8, -7.2, 10.3, -2.2 };
	float M = 0.f, D = 0.f;
	printf("Массив вещественных чисел:\n");
	for (int i = 0; i < n; i++) {
		printf("%.2f, ", x[i]);
		M += x[i];
	}
	M /= n;
	printf("\nМатическое ожидание = %.2f\n", M);
	for (int i = 0; i < n; i++) {
		D += pow(x[i] - M, 2.f);
	}
	D = sqrtf(D / (n - 1.f));
	printf("\nДисперсия = %.2f\n", D);
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 8
	const int N = 10;
	float x[N] = { 1.2, 2.5, -3.0, -1.6, 12.34, 8.9, -4.05, 26.7, -9.0, 5.11 };
	float S = 0.f, sum = 0.f; int n = 0;
	printf("Элементы с нечетными индексами в массиве из %d чисел:\n", N);
	for (int i = 1; i < N; i += 2) {
		printf("%.2f, ", x[i]);
		sum += x[i]; n++;
	}
	S = sum / n;
	printf("\nСумма = %.2f\n", sum);
	printf("\nСреднее арифметическое значение = %.2f\n", S);
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 9
	const int N = 10;
	int a[N] = { 1, 2, -3, -4, 5, 6, -7, -8, 9, 10 };
	int b[N] = { 5, 2, 3, 4, -5, 6, -9, -8, 10, 11 };
	int c[N];
	printf("  a[i]    b[i]    c[i]  \n");
	for (int i = 0; i < N; i++) {
		if (a[i] != b[i]) c[i] = a[i] + b[i];
		else c[i] = a[i];
		printf("%6d%6d%6d\n", a[i], b[i], c[i]);
	}
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 10
	float a[10] = { 1.4, 5.7, 3.2, 4.9, 5.12, 2.32, 7.0, 0.8, 2.2, 1.1 };
	float max = a[0], min = a[0];
	printf("Вещественные числа:\n");
	for (int i = 0; i < 10; i++) {
		printf("%.2f, ", a[i]);
		max = fmaxf(max, a[i]);
		min = fminf(min, a[i]);
	}
	printf("\nMAX = %.2f, MIN = %.2f, MAX - MIN =  %.2f\n", max, min, (max - min));
	_getch();
}

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 11
	float a[10];
	bool test = false;
	printf("Введите вещественное число:\n");
	scanf_s("%f", &a[0]);
	for (int i = 1; i < 10; i++) {
		printf("Введите вещественное число:\n");
		scanf_s("%f", &a[i]);
		if (a[i] > a[i - 1])
		{
			test = true;
		}
		else
		{
			test = false;
			break;
		}
	}
	if (test) printf("\nВозрастающая последовательность!\n");
	else printf("\nНевозрастающая последовательность!\n");

	_getch();
}

void variant12() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 12
	int n;
	do {
		system("cls");
		printf("Введите размер массива (6 < n < 10):\n");
		scanf_s("%d", &n);
	} while (n < 6 || n > 10);
	float *x = new float[n];
	float y = 0.f;
	for (int i = 0; i < n; i++) {
		printf("Введите %d-е число:\n", i);
		scanf_s("%f", &x[i]);
		y += powf(-1.f, i) * x[i];
	}
	printf("\nY =  %.2f\n", y);
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 13
	int x[18] = {8, 9, 34, 23, 8, 8, 2, 5, 90, 29, 65, 17, 8, 8, 18, 7, 33, 8};
	int count = 0, lastEl = x[size(x)-1];
	printf("Массив целых чисел:\n");
	for (int i = 0; i < 18; i++)
	{
		printf("%d, ", x[i]);
		if (x[i] != lastEl) count++;
	}
	printf("\nКол-во отличных от последнего элементов =  %d\n", count);
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 14
	int x[12] = { 8, -9, 34, 23, 8, -8, -2, 5, -90, 29, -65, 17 };
	int temp;
	printf("Массив целых чисел:\n");
	for (int i = size(x) - 1; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			if (x[j] < 0)
			{
				temp = x[j];
				x[j] = x[j - 1];
				x[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 12; i++)
	{
		printf("%d | ", x[i]);
	}
	_getch();
}

void variant15() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 15
	int x[15], j = 0;
	for (int i = 2; i < 60; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 || i == 2 || i == 3)
		{
			x[j] = i;	j++;
		}
	}
	printf("Массив из 15 простых чисел:\n");
	for (int i = 0; i < 15; i++)
	{
		printf("%d | ", x[i]);
	}
	_getch();
}

void variant16() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 16
	int N[8] = {16, 24, 14, 124, 88, 76, 58, 102};
	int NOD = N[0];
	printf("Массив натуральных чисел:\n");
	printf("%d | ", N[0]);
	for (int i = 1; i < 8; i++) {
		printf("%d | ", N[i]);
		while (NOD != 0 && N[i] != 0)
		{
			if (NOD > N[i]) NOD = NOD % N[i];
			else N[i] = N[i] % NOD;
		}
		NOD = NOD + N[i];
	}
	printf("\nНОД = %d\n", NOD);
	_getch();
}

void variant17() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 17
	int N[20] = { 16, 12, 2, 3, 88, 76, 58, 102, 123, 34, 55, 4, 65, 5, 88, 34, 45, 6, 11, 7 };
	int sum = 0;
	printf("Массив натуральных чисел с простыми индексами:\n");
	for (int i = 2; i < 20; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 || i == 2 || i == 3)
		{
			printf("N[%d] = %d\n", i, N[i]);
			sum += N[i];
		}
	}
	printf("\nСумма чисел с простыми индексами = %d\n", sum);
	_getch();
}

void variant18() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 18
	int N[20] = { 16, 12, 2, 3, 88, 76, 58, 102, 123, 34, 55, 4, 65, 5, 88, 34, 45, 6, 11, 7 };
	int sum = 0, f0 = 1, f1 = 1, fn = 1;
	printf("Массив натуральных чисел с Фибоначчи индексами:\n");
	for (int i = 0; i < 20; i++) {
		if (i == fn)
		{
			printf("N[%d] = %d\n", i, N[i]);
			sum += N[i];
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
		}
	}
	printf("\nСумма чисел с Фибоначчи индексами = %d\n", sum);
	_getch();
}

void variant19() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 19
	int n;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	float *x = new float[n];
	float y = 1.f, sum = 0.f;
	for (int i = 0; i < n; i++) {
		printf("Введите %d-е число: ", i + 1);
		scanf_s("%f", &x[i]);
		for (int j = 0; j < (i + 1); j++) {
			sum += x[j];
		}
		y *= sum;
		sum = 0.f;
	}
	printf("\nY =  %.2f\n", y);
	_getch();
}

void variant20() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 20
	int n[24] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
	for (int i = size(n) - 1; i > 0; i -= 6) {
		for (int j = i; j > i - 6; j--) {
			printf(" %2d ", n[j]);
		}
		printf("\n");
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