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
	case 0: printf("Её название - НОЛЬ"); break;
	case 1: printf("Её название - ОДИН"); break;
	case 2: printf("Её название - ДВА"); break;
	case 3: printf("Её название - ТРИ"); break;
	case 4: printf("Её название - ЧЕТЫРЕ"); break;
	case 5: printf("Её название - ПЯТЬ"); break;
	case 6: printf("Её название - ШЕСТЬ"); break;
	case 7: printf("Её название - СЕМЬ"); break;
	case 8: printf("Её название - ВОСЕМЬ"); break;
	case 9: printf("Её название - ДЕВЯТЬ"); break;
	default: printf("Введена не цифра, а число!!!");
	}
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 3
	int k;
	printf("Введите число месяца: ");
	scanf_s("%d", &k);
	switch (k)
	{
	case 1: case 8: case 15: case 22: case 29:
		printf("%d-е число - понедельник", k); break;
	case 2: case 9: case 16: case 23: case 30:
		printf("%d-е число - вторник", k); break;
	case 3: case 10: case 17: case 24:
		printf("%d-е число - среда", k); break;
	case 4: case 11: case 18: case 25:
		printf("%d-е число - четверг", k); break;
	case 5: case 12: case 19: case 26:
		printf("%d-е число - пятница", k); break;
	case 6: case 13: case 20: case 27:
		printf("%d-е число - суббота", k); break;
	case 7: case 14: case 21: case 28:
		printf("%d-е число - воскресенье", k); break;
	default: printf("В месяце НЕТ такого дня!!!");
	}
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	int k, m;
	printf("Введите число и номер месяца: ");
	scanf_s("%d%d", &k, &m);
	switch (k)
	{
	case 1: printf("Первое "); break;
	case 2: printf("Второе "); break;
	case 3: printf("Третье "); break;
	case 4: printf("Четвертое "); break;
	case 5: printf("Пятое "); break;
	case 6: printf("Шестое "); break;
	case 7: printf("Седьмое "); break;
	case 8: printf("Восьмое "); break;
	case 9: printf("Девятое "); break;
	case 10: printf("Десятое "); break;
	case 11: printf("Одинадцатое "); break;
	case 12: printf("Двенадцатое "); break;
	case 13: printf("Тринадцатое "); break;
	case 14: printf("Четырнадцатое "); break;
	case 15: printf("Пятнадцатое "); break;
	case 16: printf("Шестнадцатое "); break;
	case 17: printf("Семнадцатое "); break;
	case 18: printf("Восемнадцатое "); break;
	case 19: printf("Девятнадцатое "); break;
	case 20: printf("Двацатое "); break;
	case 21: printf("Двадцать первое "); break;
	case 22: printf("Двадцать второе "); break;
	case 23: printf("Двацать третье "); break;
	case 24: printf("Двацать четвертое "); break;
	case 25: printf("Двадцать пятое "); break;
	case 26: printf("Двадцать шестое "); break;
	case 27: printf("Двадцать седьмое "); break;
	case 28: printf("Двадцать восьмое "); break;
	case 29: printf("Двадцать девятое "); break;
	case 30: printf("Тридцатое "); break;
	case 31: printf("Тридцать первое "); break;
	default: printf("Такого дня НЕТ !!!\n"); break;
	}
	switch (m)
	{
	case 1: printf("января\n"); break;
	case 2: printf("февраля\n"); break;
	case 3: printf("марта\n"); break;
	case 4: printf("апреля\n"); break;
	case 5: printf("мая\n"); break;
	case 6: printf("июня\n"); break;
	case 7: printf("июля\n"); break;
	case 8: printf("августа\n"); break;
	case 9: printf("сентября\n"); break;
	case 10: printf("октября\n"); break;
	case 11: printf("ноября\n"); break;
	case 12: printf("декабря\n"); break;
	default: printf("Такого месяца НЕТ !!!\n"); break;
	}
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 5
	int k, h, m;
	printf("Введите k секунда суток: ");
	scanf_s("%d", &k);
	h = k / 3600;
	m = (k - 3600 * h) / 60;
	switch (h)
	{
	case 1: case 21: 
		printf("%d час и ", h); break;
	case 2: case 3: case 4: case 22: case 23:
		printf("%d часа и ", h); break;
	case 0: case 5: case 6: case 7: case 8: case 9:
	case 10: case 11: case 12: case 13: case 14: 
	case 15: case 16: case 17: case 18: case 19: case 20:
		printf("%d часов и ", h); break;
	default: printf("В сутках ВСЕГО 24 часа, a НЕ %d !!!\n", h); break;
	}
	switch (m)
	{
	case 1: case 21: case 31: case 41: case 51: 
		printf("%d минута\n", m); break;
	case 2: case 3: case 4: case 22: case 23: case 24: case 32: case 33: 
	case 34: case 42: case 43: case 44: case 52: case 53: case 54:
		printf("%d минуты\n", m); break;
	case 0: case 5: case 6: case 7: case 8: case 9:
	case 10: case 11: case 12: case 13: case 14:
	case 15: case 16: case 17: case 18: case 19: 
	case 20: case 25: case 26: case 27: case 28: case 29:
	case 30: case 35: case 36: case 37: case 38: case 39:
	case 40: case 45: case 46: case 47: case 48: case 49:
	case 50: case 55: case 56: case 57: case 58: case 59:
		printf("%d минут\n", m); break;
	default: printf("В часе ВСЕГО 60 минут!!!\n"); break;
	}
	_getch();
}

#define PI 3.1413

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 6
	int N, R, H; float S, V, SS;
	printf("Введите номер типа фигуры N\n(1 - круг, 2 - шар, 3 - цилиндр, 4 - сфера): ");
	scanf_s("%d", &N);
	switch (N)
	{
	case 1: {
		printf("Введите радиус круга R: ");
		scanf_s("%d", &R);
		S = PI * pow(R, 2);
		printf("Площадь круга S = %8.4f\n", S);
	} break;
	case 2: {
		printf("Введите радиус шара R: ");
		scanf_s("%d", &R);
		V = 4 * PI * pow(R, 3) / 3;
		printf("Объем шара V = %8.4f\n", V);
	} break;
	case 3: {
		printf("Введите радиус оснований и высоту цилиндра: ");
		scanf_s("%d%d", &R, &H);
		V = PI * pow(R, 2) * H;
		printf("Объём цилиндра V = %8.4f\n", V);
	} break;
	case 4: {
		printf("Введите радиус сферы R: ");
		scanf_s("%d", &R);
		SS = 4 * PI * pow(R, 2);
		printf("Площадь поверхности сферы S = %8.4f\n", SS);
	} break;
	default: printf("НЕТ такой фигуры!!!\n");
	}
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 7
	int N;
	printf("Введите число N от 0 до 15: ");
	scanf_s("%d", &N);
	switch (N)
	{
	case 0: case 1: case 2: case 3: case 4: 
	case 5: case 6: case 7: case 8: case 9: 
		printf("%d", N); break;
	case 10: case 11: case 12: 
	case 13: case 14: case 15:
		printf("%X", N); break;
	default: printf("Введенное число расположенно ВНЕ диапазона");
	}
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 8
	int K;
	printf("Введите свой возраст: ");
	scanf_s("%d", &K);
	switch (K)
	{
	case 1: 
		printf("Мне %d год", K); break;
	case 2: case 3: case 4: 
		printf("Мне %d года", K); break;
	case 5: case 6: case 7: case 8: case 9: case 10: 
	case 11: case 12: case 13: case 14: case 15: 
	case 16: case 17: case 18: case 19: case 20:
		printf("Мне %d лет", K); break;
	default: {
		switch (K % 10) {
		case 1:
			printf("Мне %d год", K); break;
		case 2: case 3: case 4:
			printf("Мне %d года", K); break;
		case 5: case 6: case 7: case 8: case 9: case 0:
			printf("Мне %d лет", K); break;
		}
	}
	}
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 9
	int N, a, b, h, alpha; float S;
	printf("Введите номер типа фигуры N\n(1 - прямоугольник, 2 - параллелограмм, 3 - трапеция): ");
	scanf_s("%d", &N);
	switch (N)
	{
	case 1: {
		printf("Введите стороны прямоугольника a и b: ");
		scanf_s("%d%d", &a, &b);
		S = a * b;
		printf("Площадь прямоугольника S = %8.4f\n", S);
	} break;
	case 2: {
		printf("Введите стороны параллелограмма a и b и угол между ними в град.: ");
		scanf_s("%d%d%d", &a, &b, &alpha);
		S = a * b * sin(alpha * PI / 180);
		printf("Площадь параллелограмма S = %8.4f\n", S);
	} break;
	case 3: {
		printf("Введите основания и высоту трапеции: ");
		scanf_s("%d%d%d", &a, &b, &h);
		S = h * (a + b) / 2;
		printf("Площадь трапеции S = %8.4f\n", S);
	} break;
	default: printf("НЕТ такой фигуры!!!\n");
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

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 11
	int x;
	printf("Введите любое целое число x: ");
	scanf_s("%d", &x);
	printf("Остаток от деления на 5:\n ");
	switch (x % 5)
	{
	case 0: printf("НОЛЬ"); break;
	case 1: printf("ОДИН"); break;
	case 2: printf("ДВА"); break;
	case 3: printf("ТРИ"); break;
	case 4: printf("ЧЕТЫРЕ"); break;
	}
	_getch();
}

void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 12
	int x;
	printf("Введите номер: ");
	scanf_s("%d", &x);
	switch (x)
	{
	case 1: printf("Красный\t(Каждый)"); break;
	case 2: printf("Оранжевый\t(Охотник)"); break;
	case 3: printf("Жёлтый\t(Желает)"); break;
	case 4: printf("Зелёный\t(Знать)"); break;
	case 5: printf("Голубой\t(Где)"); break;
	case 6: printf("Синий\t(Сидит)"); break;
	case 7: printf("Фиолетовый\t(Фазан)"); break;
	default: printf("У радуги ВСЕГО семь цветов!!!");
	}
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 13
	int x, ost, ceil;
	printf("Введите двузначное число: ");
	scanf_s("%d", &x);
	if (x > 10 && x < 100) {
		ceil = x / 10;
		ost = x % 10;
		switch ((ceil + ost) % 3)
		{
		case 0: printf("%d делится НАЦЕЛО на 3\n%d / 3 = %d", x, x, x / 3); break;
		default: printf("%d НЕделится на 3\n", x); break;
		}
	} 
	else printf("Введенное число НЕдвузначное!!!\n");
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 14
	int x, ost, k, sq;
	printf("Введите двузначное число: ");
	scanf_s("%d", &x);
	if (x > 10 && x < 100) {
		ost = x % 10;
		if (ost == 5) {
			k = x / 10;
			printf("%d * %d * 100 + 25 = %d\n", k, k + 1, k * (k + 1) * 100 + 25);
			sq = pow(x, 2);
			printf("%d ^ 2 = %d\n", x, sq);
		}
		else printf("Последняя цифра - НЕ 5!!!\n");
	}
	else printf("Введенное число НЕдвузначное!!!\n");
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