#define _USE_MATH_DEFINES
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>

using namespace std;

float maxim(float mass[6])
{
	float max = mass[0];
	for (int i = 1; i < 6; i++)
	{
		if (mass[i] > max) max = mass[i];
	}
	printf("Максимальный элемент равен %.2f\n", max);
	return max;
}

float minim(float mass[6])
{
	float min = mass[0];
	for (int i = 1; i < 6; i++)
	{
		if (mass[i] < min) min = mass[i];
	}
	printf("Минимальный элемент равен %.2f\n", min);
	return min;
}

void summma(float mass1[6], float mass2[6], float sum[6])
{
	for (int i = 0; i < 6; i++)
	{
		sum[i] = mass1[i] + mass2[i];
		printf(" %4.2f |", sum[i]);
	}
	printf("\n");
}

void variant1() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 1
	float A[6] = { 1.3, 2.7, 3.1, 4.2, 5.5, 6.7 };
	float B[6] = { 5.3, 6.7, 7.2, 8.9, 4.5, 3.9 };
	float C[6] = { 3.4, 8.2, 5.6, 2.1, 6.6, 6.2 };
	float sum[6]; printf("B + C = "); summma(B, C, sum);
	float y = 0.f;
	if (minim(A) < maxim(B)) y = maxim(B) / maxim(A) + maxim(C) / maxim(sum);
	else y = maxim(sum) + maxim(C);
	printf("y = %5.2f\n", y);
	_getch();
}

float sled(float mass[6][6])
{
	float sum = 0.f;
	for (int i = 0; i < 6; i++)
	{
		sum += mass[i][i];
	}
	printf("След матрицы равен %.2f\n", sum);
	return sum;
}

void power2(float mass[6][6])
{
	printf("Квадрат матрицы с наименьшим следом:\n");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			mass[i][j] *= mass[i][j];
			printf(" %6.2f |", mass[i][j]);
		}
		printf("\n");
	}
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	float A[6][6] = 
	{
		{1.4,  2.6,  3.7,  4.2,  5.1,  6.3},
		{6.4,  5.2,  4.3,  3.5,  2.7,  1.2},
		{7.5,  8.8,  9.3,  9.0,  8.2,  7.8},
		{9.7,  8.4,  7.5,  7.7,  8.5,  9.9},
		{11.9, 12.7, 13.0, 17.1, 18.3, 19.2},
		{2.2,  4.4,  6.5,  8.5,  10.3, 12.1}
	};
	float B[6][6] = 
	{
		{1.4, 2.7, 3.9, 4.7, 5.2, 6.0},
		{2.2, 1.6, 6.5, 3.0, 4.3, 5.9},
		{3.1, 6.3, 1.8, 5.3, 2.2, 4.8},
		{4.3, 3.3, 5.1, 1.6, 1.4, 3.5},
		{5.2, 4.4, 2.4, 1.6, 1.2, 2.1},
		{6.1, 5.5, 4.6, 3.8, 2.3, 1.7}
	};
	if (sled(A) < sled(B)) power2(A);
	else power2(B);
	_getch();
}

float center_of_coord(int m1, int m2, int m3, int x1, int y1, int x2, int y2, int x3, int y3, float* yc)
{
	float xc = (m1 * x1 + m2 * x2 + m3 * x3) / (m1 + m2 + m3);
	*yc = (m1 * y1 + m2 * y2 + m3 * y3) / (m1 + m2 + m3);
	return xc;
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 3
	int m1, m2, m3, x1, y1, x2, y2, x3, y3; float xc, yc;
	printf("Введите координаты (x, y) и массу 1-ой точки: ");
	scanf_s("%d%d%d", &x1, &y1, &m1);
	printf("Введите координаты (x, y) и массу 2-ой точки: ");
	scanf_s("%d%d%d", &x2, &y2, &m2);
	printf("Введите координаты (x, y) и массу 3-ой точки: ");
	scanf_s("%d%d%d", &x3, &y3, &m3);
	xc = center_of_coord(m1, m2, m3, x1, y1, x2, y2, x3, y3, &yc);
	printf("Координаты центра тяжести 3-ёх точек = (%5.2f, %5.2f)\n", xc, yc);
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	float A[3] = { 2.3, 4.4, 6.1 };
	float B[3] = { 4.3, 8.2, 1.1 };
	float C[3] = { 4.3, 8.2, 1.1 };
	float ma, mb, mc;
	ma = sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2)) / 2;
	mb = sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2)) / 2;
	mc = sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)) / 2;
	printf("Длины медиан треугольника ABC:\nma = %6.3f, mb = %6.3f, mc = %6.3f\n", ma, mb, mc);
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