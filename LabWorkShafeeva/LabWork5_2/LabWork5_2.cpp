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
	// ������� 1
	float x, z = 0.0, r, eps = 0.00001; int n = 0;
	printf("������� ����� X (|X| < 1): ");
	scanf_s("%f", &x);
	if (fabsf(x) < 1.0f) {
		x = fabsf(x);
		do {
			r = pow(-1.0f, n) * pow(x, 2.0f * n + 1.0f) / (2.0f * n + 1.0f);
			z += r; n++;
		} while (r > eps);
		printf("Z = %.5f � ��������� %.5f\n", z, eps);
		z = atanf(x);
		printf("Z = arctg(%.2f) = %.5f\n", x, z);
	}
	else printf("�������� ����!!! X ������ ���� �� ������ ������ 1");
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 2
	float x, y = 0.0, r, eps = 0.00001; int n = 1;
	printf("������� ����� X (|X| < 1): ");
	scanf_s("%f", &x);
	if (fabsf(x) < 1.0f) {
		x = fabsf(x);
		do {
			r = pow(-1.0f, n - 1) * pow(x, n) / n;
			y += r; n++;
		} while (r > eps);
		printf("Y = %.5f � ��������� %.5f\n", y, eps);
		y = log(1.0f + x);
		printf("Y = LN(1+%.2f) = %.5f\n", x, y);
	}
	else printf("�������� ����!!! X ������ ���� �� ������ ������ 1");
	_getch();
}

int factorial(int n)
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 3
	float x, y = 0.0, r, eps = 0.00001; int n = 0;
	printf("������� ����� X: ");
	scanf_s("%f", &x);
	do {
		r = pow(x, n) / factorial(n);
		y += r; n++;
	} while (r > eps);
	printf("Y = %.5f � ��������� %.5f\n", y, eps);
	y = exp(x);
	printf("Y = EXP(%.2f) = %.5f\n", x, y);
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 4
	float x, y = 0.0, r, eps = 0.00001; int n = 0;
	printf("������� ����� X: ");
	scanf_s("%f", &x);
	do {
		r = pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
		y += r; n++;
	} while (r > eps);
	printf("Y = %.5f � ��������� %.5f\n", y, eps);
	y = sin(x);
	printf("Y = sin(%.2f) = %.5f\n", x, y);
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 5
	float x, y = 0.0, r, eps = 0.00001; int n = 0;
	printf("������� ����� X: ");
	scanf_s("%f", &x);
	do {
		r = pow(-1, n) * pow(x, 2 * n) / factorial(2 * n);
		y += r; n++;
	} while (r > eps);
	printf("Y = %.5f � ��������� %.5f\n", y, eps);
	y = cos(x);
	printf("Y = cos(%.2f) = %.5f\n", x, y);
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 6
	int x, P = 1, ost;
	printf("������� ����������� ����� X: ");
	scanf_s("%d", &x);
	printf("��� %d ", x);
	if (x > 0) {
		do {
			ost = x % 10;
			P *= ost; 
			x /= 10;
		} while (x != 0);
		printf("������������ ���� = %d\n", P);
	}
	else printf("�������� ����!!! %d �� �������� ����������� ������!", x);
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 7
	int x, P = 0, ost;
	printf("������� ����������� ����� X: ");
	scanf_s("%d", &x);
	printf("��� ����� %d ", x);
	if (x > 0) {
		do {
			ost = x % 10;
			P = P * 10 + ost;
			x /= 10;
		} while (x != 0);
		printf("�������� ������� ���� = %d\n", P);
	}
	else printf("�������� ����!!! %d �� �������� ����������� ������!", x);
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 8
	float x, eps = 0.001; int n = 1;
	printf("������� ����� X: ");
	scanf_s("%f", &x);
	do {
		x = sin(x);
		n++;
	} while (fabsf(x) > eps);
	printf("N = %d\n", n);
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 9
	int n = 1, x, maxX = 0, maxN;
	do {
		printf("������� ����� X: ");
		scanf_s("%d", &x);
		if (x < 0) {
			if (maxX == 0 || x > maxX) {
				maxX = x;
				maxN = n;
			}
		}
		n++;
	} while (x != 0);
	if (maxX)
		printf("MAX = %d, INDEX = %d\n", maxX, maxN);
	else printf("����� ����� ���!!!\n");
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 10
	int a, b; float P, S;
	do {
		printf("������� ����� ������� ������������� �������������: ");
		scanf_s("%d%d", &a, &b);
		if (a > 0 && b > 0) {
			P = a + b + sqrt(pow(a, 2.0f) + pow(b, 2.0f));
			S = a * b / 2.0f;
			printf("P = %.2f,\tS = %.2f\n", P, S);
		}
		else printf("������!!! ���� �� ������� ������� ��� �������������!!!\n");
	} while (a != 0 && b != 0);
	_getch();
}

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 11
	int x; float S = 1.0f;
	do {
		printf("������� ������������� ����� �����: ");
		scanf_s("%d", &x);
		if (x > 0) S *= x;
		else S = sqrt(S);
	} while (x > 0);
	printf("������� �������������� S = %.3f\n", S);
	_getch();
}

void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 12
	int x, N = 0, pred;
	printf("������� ����� �����: ");
	scanf_s("%d", &x);
	if (x != 0) {
		do {
			pred = x;
			printf("������� ����� �����: ");
			scanf_s("%d", &x);
			if (x * pred < 0) N++;
		} while (x != 0);
		printf("���� �������� N = %d ���(�)\n", N);
	}
	else printf("������!!! ������������������ - ������!!!\n");
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 13
	int f0 = 1, f1 = 1, fn, S = f0 + f1;
	printf("������ ���������: \n");
	do {
		fn = f1 + f0;
		printf("%d, ", fn);
		if (fn < 1000) S += fn;
		f0 = f1;
		f1 = fn;
	} while (fn < 1000);
	printf("\n����� ���� ����� ��������� S = %d\n", S);
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 14
	float x, S = 0.f; int N = 1;
	printf("������� ������������� ������������ �����: ");
	scanf_s("%f", &x);
	if (x > 0.0f) {
		do {
			S += N * x;
			printf("������� ������������� ������������ �����: ");
			scanf_s("%f", &x); N++;
		} while (x > 0.0f);
		printf("S = %.2f ��� N = %d\n", S, N);
	}
	else printf("������!!! ������������������ - ������!!!\n");
	_getch();
}

void variant15() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 15
	float R, C, S, V;
	do {
		printf("������� ������: ");
		scanf_s("%f", &R);
		if (R > 0.0f) {
			C = 2 * M_PI * R;
			S = M_PI * pow(R, 2.0f);
			V = 4.0f * M_PI * pow(R, 3) / 3.0f;
			printf("C = %.2f,\tS = %.2f,\tV = %.2f\n", C, S, V);
		}
		else printf("������!!! ��������� ������ ������� ��� �������������!!!\n");
	} while (R != 0.0f);
	_getch();
}

void variant16() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 16
	int x, n = 0, ost1, ost2, div;
	printf("������� ����������� ����� X: ");
	scanf_s("%d", &x);
	if (x > 0) {
		do {
			ost1 = x % 10;
			div = x / 10;
			do {
				ost2 = div % 10;
				if (ost1 == ost2) n++;
				div /= 10;
			} while (div != 0);
			x /= 10;
		} while (x != 0);
		if (n > 0) printf("���� ���������� ����� � ����� (N = %d)\n", n);
		else printf("��� ���������� ���� � �����\n");
	}
	else printf("�������� ����!!! %d �� �������� ����������� ������!", x);
	_getch();
}

void variant17() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 17
	int x, P = 0, ost, saveX;
	printf("������� ����������� ����� X: ");
	scanf_s("%d", &x);
	if (x > 0) {
		saveX = x;
		do {
			ost = x % 10;
			P = P * 10 + ost;
			x /= 10;
		} while (x != 0);
		if (saveX == P) printf("%d - ���������!", saveX);
		else printf("%d �� �������� �����������!", saveX);
	}
	else printf("�������� ����!!! %d �� �������� ����������� ������!", x);
	_getch();
}

void variant18() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 18
	int a, b, min, i = 0;
	printf("������� ��� ����������� �����: ");
	scanf_s("%d%d", &a, &b);
	do {
		min = fmin(a, b) + i; i++;
	} while (min % a != 0 || min % b != 0);
	printf("��� = %d\n", min);
	_getch();
}

void variant19() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 19
	float L, x;
	printf("������� ����� L: ");
	scanf_s("%f", &L);
	x = L; // ������ ���� ������������������
	//printf("������������������ xi = tg(xi-1):\n");
	do {
		//printf("%.3f,  ", x);
		x = tanf(x);
	} while (x > 0);
	printf("\n������ ������������� ���� ������������������ x = %.3f\n", x);
	_getch();
}

void variant20() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 20
	int x, sum = 0, div = 1;
	printf("������� �����: ");
	scanf_s("%d", &x);
	do {	// 6 28 496 8128
		if (x % div == 0) sum += div;
		div++;
	} while (div <= x / 2);
	if (sum == x) printf("%d - ����������� �����\n", x);
	else printf("%d - �� ����������� �����\n", x);
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
	char lines[][20] = { "������� 1", "������� 2", "������� 3", "������� 4", "������� 5",
		"������� 6", "������� 7", "������� 8", "������� 9", "������� 10", "������� 11",
		"������� 12", "������� 13", "������� 14", "������� 15", "������� 16", "������� 17",
		"������� 18", "������� 19", "������� 20", "�����" };
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