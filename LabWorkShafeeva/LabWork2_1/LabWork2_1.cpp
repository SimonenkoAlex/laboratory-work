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
	float t = 0, a = 0.5, b = 2, z;
	//printf("������� t �� 0 �� 3: ");
	//scanf_s("%f", &t);
	do {
		if (t < 1) z = 1;
		else if (t > 2) z = expf(a * t) * cos(b * t);
		else z = a * pow(t, 2) * log(t);
		printf("��� t = %4.1f\tz = %6.3f\n", t, z);
		t += 0.1;
	} while (t <= 3);
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 2
	double x = 0.0, a = 2.3, f;
	//printf("������� t �� 0 �� 4: ");
	//scanf_s("%f", &t);
	do {
		f = (x > 2)? pow(x + a, 1.0 / 5.0) : (x <= 0.3)? cos(x - a) : x;
		printf("��� x = %4.1f\tf = %6.3f\n", x, f);
		x += 0.2;
	} while (x <= 4);
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 3
	float x = 0, a = 2.7, b = 0.27, z;
	//printf("������� t �� 0 �� 7: ");
	//scanf_s("%f", &t);
	do {
		if (x < 2.3) z = (a + b) / (expf(x) + cos(x));
		else if (x >= 5) z = expf(x) + sin(x);
		else z = (a + b) / (x + 1);
		printf("��� x = %4.1f\tz = %6.3f\n", x, z);
		x += 0.3;
	} while (x <= 7);
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 4
	double i = 7, a = 2.2, b = 0.3, y;
	//printf("������� t �� 7 �� 12: ");
	//scanf_s("%f", &i);
	do {
		y = (i < 10) ? a * pow(i, 4.0) + b * i : (i == 10) ? tan(i + 0.5) : exp(2.0 * i) + sqrt(pow(a, 2.0) + pow(i, 2.0));
		printf("��� i = %4.1f\ty = %6.3f\n", i, y);
		i = floor((i + 0.2) * 10) / 10;
	} while (i <= 12);
	_getch();
}

#define PI 3.1413

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 5
	float x = 0.9, a = 1.5, y;
	//printf("������� t �� 0 �� 7: ");
	//scanf_s("%f", &t);
	do {
		if (x < 1.3) y = PI * pow(x, 2) - 7 / pow(x, 2);
		else if (x >= 3) y = log10(x + 7 * sqrt(x));
		else y = a * pow(x, 3) + 7 * sqrt(x);
		printf("��� x = %4.1f\ty = %6.3f\n", x, y);
		x = floor((x + 0.2) * 10) / 10;
	} while (x <= 5);
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 6
	double t = -1, a = 2.1, b = 0.37, z;
	//printf("������� t �� 7 �� 12: ");
	//scanf_s("%f", &i);
	do {
		z = (t < 0.1) ? sqrt(a * pow(t, 2) + b * sin(t) + 1) : (t >= 2) ? sqrt(a * pow(t, 2) + b * cos(t) + 1) : a * t + b;
		printf("��� t = %4.1f\tz = %6.3f\n", t, z);
		t = floor((t + 0.2) * 10) / 10;
	} while (t <= 4);
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 7
	float x = 0, a = 1.5, y;
	//printf("������� t �� 0 �� 7: ");
	//scanf_s("%f", &t);
	do {
		if (x < 0.3) y = a * exp(sin(x)) + 2.5;
		else if (x > 4) y = 0;
		else y = exp(cos(x)) + a;
		printf("��� x = %4.1f\ty = %6.3f\n", x, y);
		x = floor((x + 0.2) * 10) / 10;
	} while (x <= 6);
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 8
	double x = 1, a = 1.8, b = -0.5, c = 3.5, y;
	//printf("������� x �� 1 �� 2: ");
	//scanf_s("%f", &x);
	do {
		y = (x <= 1.2) ? a / x + b * pow(x, 2) - c : (x >= 4) ? sin(x) / (a + exp(x)) : (a + b * x) / sqrt(x + 1);
		printf("��� x = %4.1f\ty = %6.3f\n", x, y);
		x = floor((x + 0.1) * 10) / 10;
	} while (x <= 2);
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 9
	float t = 1, a = 2.5, z;
	//printf("������� t �� 0 �� 7: ");
	//scanf_s("%f", &t);
	do {
		if (t > a) z = t * pow(t - a, 1.0 / 3.0);
		else if (t == a) z = t * sin(a * t);
		else z = exp(-a * t) * cos(a * t);
		printf("��� t = %4.1f\tz = %6.3f\n", t, z);
		t = floor((t + 0.5) * 10) / 10;
	} while (t <= 5);
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 10
	double x = 0, a = 1.0, b = 3.0, y;
	//printf("������� x �� 1 �� 2: ");
	//scanf_s("%f", &x);
	do {
		y = (x < 2.3) ? exp(-b * x) * sin(b * x) : (x >= 3) ? exp(-a * x) * cos(b * x) : cos(b * x);
		printf("��� x = %4.1f\ty = %6.3f\n", x, y);
		x = floor((x + 0.2) * 10) / 10;
	} while (x <= 4);
	_getch();
}

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 11
	float t = 0.5, a = 1.3, b = 6.5, z;
	//printf("������� t �� 0 �� 7: ");
	//scanf_s("%f", &t);
	do {
		if (t < a) z = a * pow(t, 2) - b * sqrt(t + 1);
		else if (t > b) z = a * pow(t, 2 / 3) - pow(t + 1, 1 / 3);
		else z = a - b;
		printf("��� t = %4.1f\tz = %6.3f\n", t, z);
		t = floor((t + 0.2) * 10) / 10;
	} while (t <= 3);
	_getch();
}

void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 12
	double x = 0.0, b = -2.9, y;
	//printf("������� x �� 1 �� 2: ");
	//scanf_s("%f", &x);
	do {
		y = (x < 1.0) ? exp(-x) * cos(b * x) : (x == 1.0) ? cos(b * x) : abs(exp(-2.0 * x) * sin(b * x));
		printf("��� x = %4.1f\ty = %6.3f\n", x, y);
		x = floor((x + 0.2) * 10) / 10;
	} while (x <= 2.0);
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 13
	float x = 0.5, a = -0.8, z;
	do {
		if (x < 1) z = pow(a, 2) * x;
		else if (x == 1) z = tan(a * x);
		else z = sin(cos(a * x));
		printf("��� x = %4.1f\tz = %6.3f\n", x, z);
		x = floor((x + 0.5) * 10) / 10;
	} while (x <= 2);
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 14
	double x = 1.0, b = 1.3, y;
	do {
		y = (x < 1.3) ? log(b * x) - 1 / (b * x + 1) : (x > 1.7) ? log(b * x) + 1 / (b * x + 1) : b * x + 1;
		printf("��� x = %4.1f\ty = %6.3f\n", x, y);
		x = floor((x + 0.1) * 10) / 10;
	} while (x <= 2.0);
	_getch();
}

void variant15() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 15
	double x = -1.0, a = 2.5, b = -0.9, z;
	do {
		if (x < 0.1) z = a * pow(x, 2.0) + b * pow(abs(x), 2.0 / 3.0);
		else if (x == 0.1) z = a * pow(x, 2.0);
		else z = b * pow(x, 2.0 / 3.0);
		printf("��� x = %4.1f\tz = %6.3f\n", x, z);
		x = floor((x + 0.2) * 10) / 10;
	} while (x <= 1.0);
	_getch();
}

void variant16() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 16
	int x, y, N;
	printf("������� ���������� ����� (x, y): ");
	scanf_s("%d%d", &x, &y);
	if (x == 0) printf("����� ��������� �� ��� Ox\n");
	else if (y == 0) printf("����� ��������� �� ��� Oy\n");
	else {
		N = (x > 0 && y > 0) ? 1 : 
			(x < 0 && y > 0) ? 2 : 
			(x < 0 && y < 0) ? 3 : 4;
		printf("����� � ������������ (%d, %d) ��������� � %d-���������\n", x, y, N);
	}
	_getch();
}

void variant17() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 17
	int R1, R2, H; float V, S;
	printf("������� ������� R1, R2 � ������: ");
	scanf_s("%d%d%d", &R1, &R2, &H);
	if (R1 == R2) {
		S = 2 * PI * R1 * (H + R1);
		printf("������� �������� S = %6.3f\n", S);
		V = PI * pow(R1, 2) * H;
		printf("����� �������� V = %6.3f\n", V);
	}
	else if (R1 == 0) {
		S = PI * R2 * sqrt(pow(R2, 2) + pow(H, 2));
		printf("������� ����������� ������ S = %6.3f\n", S);
		V = PI * pow(R2, 2) * H;
		printf("����� ����������� ������ V = %6.3f\n", V);
	}
	else if (R2 == 0) {
		S = PI * R1 * sqrt(pow(R1, 2) + pow(H, 2));
		printf("������� ����������� ������ S = %6.3f\n", S);
		V = PI * pow(R1, 2) * H;
		printf("����� ����������� ������ V = %6.3f\n", V);
	}
	else {
		V = H * PI * (pow(R1, 2) + pow(R2, 2) + R1 * R2) / 3;
		printf("����� ���������� ������ V = %8.4f\n", V);
	}
	_getch();
}

void variant18() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 18
	int M, N;
	printf("������� �����: ");
	scanf_s("%d", &N);
	M = (N < 2) ? 2 : (N < 8) ? 8 : 10;
	printf("%d ����� ������������ %d-����� ��\n", N, M);
	_getch();
}

void variant19() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 19
	int N, M;
	printf("������� �����: ");
	scanf_s("%d", &N);
	if (N % 2 == 0) {
		M = N / 2;
		printf("%d ������� ������ �� ���: %d / 2 = %d\n", N, N, M);
	}
	else if (N % 3 == 0) {
		M = N / 3;
		printf("%d ������� ������ �� ���: %d / 3 = %d\n", N, N, M);
	}
	else if (N % 5 == 0) {
		M = N / 5;
		printf("%d ������� ������ �� ����: %d / 5 = %d\n", N, N, M);
	}
	else printf("%d �� ������� ������ �� �� 2, �� �� 3, �� �� 5\n", N);
	_getch();
}

void variant20() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// ������� 20
	int a, b, h; float S;
	printf("������� a, b, h: ");
	scanf_s("%d%d%d", &a, &b, &h);
	S = (h == 0) ? a * b : (a == b) ? pow(a, 2) : h * (a + b) / 2;
	printf("S = %8.3f\n", S);
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