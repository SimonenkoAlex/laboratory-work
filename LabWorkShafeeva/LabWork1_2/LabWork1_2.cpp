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
	int k, h, m, s;
	printf("Введите k секунда суток: ");
	scanf_s("%d", &k);
	h = k / 3600;
	m = (k - 3600 * h) / 60;
	s = k - 3600 * h - 60 * m;
	printf("%d секунд = %d часов %d минут %d секунд\n", k, h, m, s);
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	int a, b, h; float S, V;
	printf("Введите длины (площади) оснований и\nвысоту трапеции (усеченного конуса): ");
	scanf_s("%d%d%d", &a, &b, &h);
	S = h * (a + b) / 2;
	printf("Площадь трапеции S = %8.4f\n", S);
	V = h / 3 * (a + b + sqrt(a * b));
	printf("Объем усеченного конуса V = %8.4f\n", V);
	_getch();
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
	xc = (m1 * x1 + m2 * x2 + m3 * x3) / (m1 + m2 + m3); 
	yc = (m1 * y1 + m2 * y2 + m3 * y3) / (m1 + m2 + m3);
	printf("Координаты центра тяжести 3-ёх точек = (%5.2f, %5.2f)\n", xc, yc);
	_getch();
}

#define PI 3.1416

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	int R; float S, V, SS;
	printf("Введите радиус шара (круга): ");
	scanf_s("%d", &R);
	S = PI * pow(R, 2);
	printf("Площадь круга S = %8.4f\n", S);
	V = 4 * PI * pow(R, 3) / 3;
	printf("Объем шара V = %8.4f\n", V);
	printf("Соотношение V / S = %6.2f\n", V / S);
	_getch();
	// вариант 7
	SS = 4 * PI * pow(R, 2);
	printf("Площадь поверхности шара S = %8.4f\n", SS);
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 5
	int a, b, c; float ma, mb, mc;
	printf("Введите длины сторон треугольника: ");
	scanf_s("%d%d%d", &a, &b, &c);
	ma = sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2)) / 2;
	mb = sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2)) / 2;
	mc = sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)) / 2;
	printf("Длины медиан треугольника ABC:\nma = %6.3f, mb = %6.3f, mc = %6.3f\n", ma, mb, mc);
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 6
	int r, h; float S, V;
	printf("Введите радиус основания и высоту конуса: ");
	scanf_s("%d%d", &r, &h);
	S = PI * pow(r, 2) + PI * r * sqrt(pow(r, 2) + pow(h, 2));
	V = (PI * pow(r, 2) * h) / 3;
	printf("Площадь поверхности конуса S = %8.4f\n", S);
	printf("Объём конуса V = %8.4f\n", V);
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 8
	int k, h, m, s; float angle;
	printf("Введите положение часовой, минутной и секундной стрелки: ");
	scanf_s("%d%d%d", &h, &m, &s);
	k = s + 3600 * h + 60 * m;
	printf("%d часов %d минут %d секунд = %d секунда суток\n", h, m, s, k);
	angle = 360 * k / (12 * 3600);
	printf("Угол поворота часовой стрелки в %d:%d:%d = %4.2f град.\n", h, m, s, angle);
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 9
	int x;
	printf("Введите двузначное целое число х < 15: ");
	scanf_s("%d", &x);
	printf("Число %d в восьмеричной СС = %o\n", x, x);
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 10
	int x1, y1, x2, y2; float L;
	printf("Введите координаты (x, y) 1-ой точки: ");
	scanf_s("%d%d", &x1, &y1);
	printf("Введите координаты (x, y) 2-ой точки: ");
	scanf_s("%d%d", &x2, &y2);
	L = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("Расстояние между точками L = %5.2f\n", L);
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
	case 6: variant8(); system("cls"); break;
	case 7: variant9(); system("cls"); break;
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