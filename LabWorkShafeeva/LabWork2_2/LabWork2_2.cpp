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
	int x;
	printf("������� ����� ����� x: ");
	scanf_s("%d", &x);
	printf("������� �� ������� �� 8:\n ");
	switch (x % 8)
	{
	case 0: printf("����"); break;
	case 1: printf("����"); break;
	case 2: printf("���"); break;
	case 3: printf("���"); break;
	case 4: printf("������"); break;
	case 5: printf("����"); break;
	case 6: printf("�����"); break;
	case 7: printf("����"); break;
	}
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 2
	int x;
	printf("������� �����: ");
	scanf_s("%d", &x);
	switch (x)
	{
	case 0: printf("Ÿ �������� - ����"); break;
	case 1: printf("Ÿ �������� - ����"); break;
	case 2: printf("Ÿ �������� - ���"); break;
	case 3: printf("Ÿ �������� - ���"); break;
	case 4: printf("Ÿ �������� - ������"); break;
	case 5: printf("Ÿ �������� - ����"); break;
	case 6: printf("Ÿ �������� - �����"); break;
	case 7: printf("Ÿ �������� - ����"); break;
	case 8: printf("Ÿ �������� - ������"); break;
	case 9: printf("Ÿ �������� - ������"); break;
	default: printf("������� �� �����, � �����!!!");
	}
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 3
	int k;
	printf("������� ����� ������: ");
	scanf_s("%d", &k);
	switch (k)
	{
	case 1: case 8: case 15: case 22: case 29:
		printf("%d-� ����� - �����������", k); break;
	case 2: case 9: case 16: case 23: case 30:
		printf("%d-� ����� - �������", k); break;
	case 3: case 10: case 17: case 24:
		printf("%d-� ����� - �����", k); break;
	case 4: case 11: case 18: case 25:
		printf("%d-� ����� - �������", k); break;
	case 5: case 12: case 19: case 26:
		printf("%d-� ����� - �������", k); break;
	case 6: case 13: case 20: case 27:
		printf("%d-� ����� - �������", k); break;
	case 7: case 14: case 21: case 28:
		printf("%d-� ����� - �����������", k); break;
	default: printf("� ������ ��� ������ ���!!!");
	}
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 4
	int k, m;
	printf("������� ����� � ����� ������: ");
	scanf_s("%d%d", &k, &m);
	switch (k)
	{
	case 1: printf("������ "); break;
	case 2: printf("������ "); break;
	case 3: printf("������ "); break;
	case 4: printf("��������� "); break;
	case 5: printf("����� "); break;
	case 6: printf("������ "); break;
	case 7: printf("������� "); break;
	case 8: printf("������� "); break;
	case 9: printf("������� "); break;
	case 10: printf("������� "); break;
	case 11: printf("����������� "); break;
	case 12: printf("����������� "); break;
	case 13: printf("����������� "); break;
	case 14: printf("������������� "); break;
	case 15: printf("����������� "); break;
	case 16: printf("������������ "); break;
	case 17: printf("����������� "); break;
	case 18: printf("������������� "); break;
	case 19: printf("������������� "); break;
	case 20: printf("�������� "); break;
	case 21: printf("�������� ������ "); break;
	case 22: printf("�������� ������ "); break;
	case 23: printf("������� ������ "); break;
	case 24: printf("������� ��������� "); break;
	case 25: printf("�������� ����� "); break;
	case 26: printf("�������� ������ "); break;
	case 27: printf("�������� ������� "); break;
	case 28: printf("�������� ������� "); break;
	case 29: printf("�������� ������� "); break;
	case 30: printf("��������� "); break;
	case 31: printf("�������� ������ "); break;
	default: printf("������ ��� ��� !!!\n"); break;
	}
	switch (m)
	{
	case 1: printf("������\n"); break;
	case 2: printf("�������\n"); break;
	case 3: printf("�����\n"); break;
	case 4: printf("������\n"); break;
	case 5: printf("���\n"); break;
	case 6: printf("����\n"); break;
	case 7: printf("����\n"); break;
	case 8: printf("�������\n"); break;
	case 9: printf("��������\n"); break;
	case 10: printf("�������\n"); break;
	case 11: printf("������\n"); break;
	case 12: printf("�������\n"); break;
	default: printf("������ ������ ��� !!!\n"); break;
	}
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 5
	int k, h, m;
	printf("������� k ������� �����: ");
	scanf_s("%d", &k);
	h = k / 3600;
	m = (k - 3600 * h) / 60;
	switch (h)
	{
	case 1: case 21: 
		printf("%d ��� � ", h); break;
	case 2: case 3: case 4: case 22: case 23:
		printf("%d ���� � ", h); break;
	case 0: case 5: case 6: case 7: case 8: case 9:
	case 10: case 11: case 12: case 13: case 14: 
	case 15: case 16: case 17: case 18: case 19: case 20:
		printf("%d ����� � ", h); break;
	default: printf("� ������ ����� 24 ����, a �� %d !!!\n", h); break;
	}
	switch (m)
	{
	case 1: case 21: case 31: case 41: case 51: 
		printf("%d ������\n", m); break;
	case 2: case 3: case 4: case 22: case 23: case 24: case 32: case 33: 
	case 34: case 42: case 43: case 44: case 52: case 53: case 54:
		printf("%d ������\n", m); break;
	case 0: case 5: case 6: case 7: case 8: case 9:
	case 10: case 11: case 12: case 13: case 14:
	case 15: case 16: case 17: case 18: case 19: 
	case 20: case 25: case 26: case 27: case 28: case 29:
	case 30: case 35: case 36: case 37: case 38: case 39:
	case 40: case 45: case 46: case 47: case 48: case 49:
	case 50: case 55: case 56: case 57: case 58: case 59:
		printf("%d �����\n", m); break;
	default: printf("� ���� ����� 60 �����!!!\n"); break;
	}
	_getch();
}

#define PI 3.1413

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 6
	int N, R, H; float S, V, SS;
	printf("������� ����� ���� ������ N\n(1 - ����, 2 - ���, 3 - �������, 4 - �����): ");
	scanf_s("%d", &N);
	switch (N)
	{
	case 1: {
		printf("������� ������ ����� R: ");
		scanf_s("%d", &R);
		S = PI * pow(R, 2);
		printf("������� ����� S = %8.4f\n", S);
	} break;
	case 2: {
		printf("������� ������ ���� R: ");
		scanf_s("%d", &R);
		V = 4 * PI * pow(R, 3) / 3;
		printf("����� ���� V = %8.4f\n", V);
	} break;
	case 3: {
		printf("������� ������ ��������� � ������ ��������: ");
		scanf_s("%d%d", &R, &H);
		V = PI * pow(R, 2) * H;
		printf("����� �������� V = %8.4f\n", V);
	} break;
	case 4: {
		printf("������� ������ ����� R: ");
		scanf_s("%d", &R);
		SS = 4 * PI * pow(R, 2);
		printf("������� ����������� ����� S = %8.4f\n", SS);
	} break;
	default: printf("��� ����� ������!!!\n");
	}
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 7
	int N;
	printf("������� ����� N �� 0 �� 15: ");
	scanf_s("%d", &N);
	switch (N)
	{
	case 0: case 1: case 2: case 3: case 4: 
	case 5: case 6: case 7: case 8: case 9: 
		printf("%d", N); break;
	case 10: case 11: case 12: 
	case 13: case 14: case 15:
		printf("%X", N); break;
	default: printf("��������� ����� ������������ ��� ���������");
	}
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 8
	int K;
	printf("������� ���� �������: ");
	scanf_s("%d", &K);
	switch (K)
	{
	case 1: 
		printf("��� %d ���", K); break;
	case 2: case 3: case 4: 
		printf("��� %d ����", K); break;
	case 5: case 6: case 7: case 8: case 9: case 10: 
	case 11: case 12: case 13: case 14: case 15: 
	case 16: case 17: case 18: case 19: case 20:
		printf("��� %d ���", K); break;
	default: {
		switch (K % 10) {
		case 1:
			printf("��� %d ���", K); break;
		case 2: case 3: case 4:
			printf("��� %d ����", K); break;
		case 5: case 6: case 7: case 8: case 9: case 0:
			printf("��� %d ���", K); break;
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
	// ������� 9
	int N, a, b, h, alpha; float S;
	printf("������� ����� ���� ������ N\n(1 - �������������, 2 - ��������������, 3 - ��������): ");
	scanf_s("%d", &N);
	switch (N)
	{
	case 1: {
		printf("������� ������� �������������� a � b: ");
		scanf_s("%d%d", &a, &b);
		S = a * b;
		printf("������� �������������� S = %8.4f\n", S);
	} break;
	case 2: {
		printf("������� ������� ��������������� a � b � ���� ����� ���� � ����.: ");
		scanf_s("%d%d%d", &a, &b, &alpha);
		S = a * b * sin(alpha * PI / 180);
		printf("������� ��������������� S = %8.4f\n", S);
	} break;
	case 3: {
		printf("������� ��������� � ������ ��������: ");
		scanf_s("%d%d%d", &a, &b, &h);
		S = h * (a + b) / 2;
		printf("������� �������� S = %8.4f\n", S);
	} break;
	default: printf("��� ����� ������!!!\n");
	}
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 10
	int x, ost;
	printf("������� ����� �� 0 �� 31: ");
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
	default: printf("��������� ����� �� ������ � ��������!");
	}
	_getch();
}

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 11
	int x;
	printf("������� ����� ����� ����� x: ");
	scanf_s("%d", &x);
	printf("������� �� ������� �� 5:\n ");
	switch (x % 5)
	{
	case 0: printf("����"); break;
	case 1: printf("����"); break;
	case 2: printf("���"); break;
	case 3: printf("���"); break;
	case 4: printf("������"); break;
	}
	_getch();
}

void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 12
	int x;
	printf("������� �����: ");
	scanf_s("%d", &x);
	switch (x)
	{
	case 1: printf("�������\t(������)"); break;
	case 2: printf("���������\t(�������)"); break;
	case 3: printf("Ƹ����\t(������)"); break;
	case 4: printf("������\t(�����)"); break;
	case 5: printf("�������\t(���)"); break;
	case 6: printf("�����\t(�����)"); break;
	case 7: printf("����������\t(�����)"); break;
	default: printf("� ������ ����� ���� ������!!!");
	}
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 13
	int x, ost, ceil;
	printf("������� ���������� �����: ");
	scanf_s("%d", &x);
	if (x > 10 && x < 100) {
		ceil = x / 10;
		ost = x % 10;
		switch ((ceil + ost) % 3)
		{
		case 0: printf("%d ������� ������ �� 3\n%d / 3 = %d", x, x, x / 3); break;
		default: printf("%d ��������� �� 3\n", x); break;
		}
	} 
	else printf("��������� ����� ������������!!!\n");
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 14
	int x, ost, k, sq;
	printf("������� ���������� �����: ");
	scanf_s("%d", &x);
	if (x > 10 && x < 100) {
		ost = x % 10;
		if (ost == 5) {
			k = x / 10;
			printf("%d * %d * 100 + 25 = %d\n", k, k + 1, k * (k + 1) * 100 + 25);
			sq = pow(x, 2);
			printf("%d ^ 2 = %d\n", x, sq);
		}
		else printf("��������� ����� - �� 5!!!\n");
	}
	else printf("��������� ����� ������������!!!\n");
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
	char lines[][20] = { "������� 1", "������� 2", "������� 3", "������� 4", "������� 5",
		"������� 6", "������� 7", "������� 8", "������� 9", "������� 10", "������� 11", 
		"������� 12", "������� 13", "������� 14", "�����" };
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