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
	float A[4][4] = 
	{
		{1.3,  2.7,  3.1,  4.2},
		{5.5,  6.7,  7.7,  8.7},
		{9.4,  10.0, 11.1, 12.8},
		{13.3, 14.6, 15.9, 16.2}
	};
	float B[4][4] = 
	{
		{5.3, 6.7, 7.2, 8.9},
		{4.5, 3.9, 2.1, 1.0},
		{9.2, 8.7, 7.8, 9.0},
		{3.0, 4.4, 5.8, 6.3}
	};
	float C[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			C[i][j] = A[i][j] + B[i][j];
			printf(" %6.2f |", C[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant2() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 2
	float B[5][5] =
	{
		{1.3,  2.7,  3.2,  4.9,  5.5},
		{6.5,  7.9,  8.1,  9.0,  10.1},
		{11.2, 12.7, 13.8, 14.0, 15.6},
		{16.0, 17.4, 18.8, 19.3, 20.2},
		{21.0, 22.3, 23.8, 24.8, 25.2}
	};
	float Bt[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			Bt[i][j] = B[j][i];
			printf(" %6.2f |", Bt[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant3() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 3
	float A[4][4] =
	{
		{1.3,  2.7,  3.1,  4.2},
		{5.5,  6.7,  7.7,  8.7},
		{9.4,  10.0, 11.1, 12.8},
		{13.3, 14.6, 15.9, 16.2}
	};
	float C[4][4], K = 3.f;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			C[i][j] = A[i][j] * K;
			printf(" %6.2f |", C[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant4() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 4
	int A[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i >= j) A[i][j] = i - j + 1;
			else A[i][j] = 0;
			printf(" %2d |", A[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant5() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 5
	float A[5][5] =
	{
		{1.3, 2.7, 3.2, 4.9, 5.5},
		{6.5, 7.9, 8.1, 9.0, 1.1},
		{1.2, 1.7, 1.8, 1.0, 1.6},
		{1.0, 1.4, 1.8, 1.3, 2.2},
		{2.0, 2.3, 2.8, 2.8, 2.2}
	};
	int N; float AN;
	printf("Введите натуральное N: ");
	scanf_s("%d", &N);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			AN = pow(A[i][j], N);
			printf(" %6.2f |", AN);
		}
		printf("\n");
	}
	_getch();
}

void variant6() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 6
	int A[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == j) A[i][j] = i;
			else A[i][j] = 0;
			printf(" %2d |", A[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant7() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 7
	int A[10][10], N = 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			A[i][j] = N;
			printf(" %3d |", A[i][j]);
			N++;
		}
		printf("\n");
	}
	_getch();
}

void variant8() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 8
	const int n = 5;
	int A[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = (j - i + n) % n + 1;
			printf(" %3d |", A[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant9() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 9
	const int N = 5;
	int A[N][N], B[N], max;
	for (int i = 0; i < N; i++)
	{
		printf("Введите %d элементов %d-ой строки через пробел: ", N, i + 1);
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}
	printf("Вектор В из максимальных элементов каждой строки:\n");
	for (int i = 0; i < N; i++) {
		max = A[i][0]; // в начале max - 1-ый элемент i-ой строки
		for (int j = 1; j < N; j++) {
			max = fmax(max, A[i][j]);
		}
		B[i] = max;
		printf(" %3d |", B[i]);
	}
	_getch();
}

void variant10() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 10
	const int n = 6;
	int A[n][n] = 
	{
		{1,  2,  3,  4,  5,  6},
		{6,  5,  4,  3,  2,  1},
		{7,  8,  9,  9,  8,  7},
		{9,  8,  7,  7,  8,  9},
		{11, 12, 13, 17, 18, 19},
		{2,  4,  6,  8,  10, 12}
	};
	int X = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 != 0) A[i][j] = X;
			printf(" %3d |", A[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant11() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 11
	const int N = 5;
	int B[N][N] =
	{
		{1,  2,  3,  4,  5},
		{6,  5,  4,  3,  2},
		{7,  8,  21, 9,  20},
		{9,  10, 7,  15, 8},
		{11, 12, 13, 17, 18}
	};
	int C[N-1][N-1], n = 2, k = 3;
	printf("Массив С с удаленной %d-й строкой и %d-ым столбцом из матрицы В\n", n, k);
	for (int i = 0; i < (N - 1); i++) {
		for (int j = 0; j < (N - 1); j++) {
			if (i >= n && j >= k) C[i][j] = B[i + 1][j + 1];
			else if (i >= n) C[i][j] = B[i + 1][j];
			else if (j >= k) C[i][j] = B[i][j + 1];
			else C[i][j] = B[i][j];
			printf(" %3d |", C[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant12() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 12
	const int N = 9;
	int B[N][N] =
	{
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1},
	};
	int sumRow[N] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int sumCol[N] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool magic = false;
	printf("Квадратная матрица %d-го порядка: \n", N);
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			sumRow[i] += B[i][j];
			sumCol[j] += B[j][i];
			printf(" %3d |", B[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < (N - 1); i++)
	{
		if (sumRow[i] == sumRow[i + 1] && sumCol[i] == sumCol[i + 1]) {
			magic = true;
		}
		else {
			magic = false;
			break;
		}
	}
	if (!magic) printf("НЕявляется магическим квадратом\n");
	else printf("Является МАГИЧЕСКИМ КВАДРАТОМ!!!\n");
	_getch();
}

void variant13() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 13
	const int N = 6;
	int B[N][N] =
	{
		{1, 2, 3, 4, 5, 6},
		{2, 1, 6, 3, 4, 5},
		{3, 6, 1, 5, 2, 4},
		{4, 3, 5, 1, 1, 3},
		{5, 4, 2, 1, 1, 2},
		{6, 5, 4, 3, 2, 1}
	};
	bool symmetric = false;
	printf("Квадратная матрица %d-го порядка: \n", N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf(" %3d |", B[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < (i + 1); j++)
		{
			if (B[i][j] == B[j][i]) symmetric = true;
			else {
				symmetric = false;
				break;
			}
		}
		if (!symmetric) break;
	}
	if (!symmetric) printf("Обычная матрица\n");
	else printf("Матрица симметрична!!!\n");
	_getch();
}

void variant14() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 14
	const int N = 7, M = 4;
	int A[N][M] =
	{
		{1,  2,  3,  4},
		{5,  6,  7,  8},
		{10, 9, 11, 20},
		{4,  2,  5,  7},
		{12, 17, 8, 19},
		{3,  1,  6,  8},
		{0,  21, 3,  2}
	};
	int max = A[0][0], temp, n, m;
	printf("Матрица А[%d][%d]: \n", N, M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (A[i][j] > max)
			{
				max = A[i][j];
				n = i, m = j;
			}
			printf(" %3d |", A[i][j]);
		}
		printf("\n");
	}
	//обмен верхнего левого и найденного максимального элементов
	temp = A[0][0];
	A[0][0] = max;
	A[n][m] = temp;
	printf("Результат: \n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf(" %3d |", A[i][j]);
		}
		printf("\n");
	}
	_getch();
}

void variant15() {
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD active = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(handle, active);
	// вариант 15
	const int N = 4, M = 8;
	int A[N][M] =
	{
		{1,  2,  3,  4,  5,  6,  7,  8},
		{10, 9,-12,  8, 14,  7, 16,  6},
		{5,  4,  3, -2,  1,  0,  4,  6},
		{4,  2,  5,  7, 10, 18, -5, -3}
	};
	int sum[N] = {0, 0, 0, 0};
	printf("Матрица А[%d][%d]: \n", N, M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			sum[i] += A[i][j];
			printf(" %3d |", A[i][j]);
		}
		printf("\n");
	}
	printf("Сумма элементов по строкам: \n");
	for (int i = 0; i < N; i++)
	{
		printf(" %3d |", sum[i]);
	}
	printf("\n");
	int min = sum[0], temp;
	for (int i = 1; i < N; i++)
	{
		if (min > sum[i])
		{
			for (int j = 0; j < N; j++)
			{
				temp = A[i][j];
				A[i][j] = A[i - 1][j];
				A[i - 1][j] = temp;
			}
			min = sum[i];
		}
	}
	printf("Новая матрица А[%d][%d]: \n", N, M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf(" %3d |", A[i][j]);
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