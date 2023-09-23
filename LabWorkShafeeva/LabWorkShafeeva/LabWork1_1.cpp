#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define a 1.5
#define b 2.0
#define c -0.7
#define PI 3.1413

void main()
{
	setlocale(LC_CTYPE, "rus");
	// вариант 1: x1 = 1, x2 = 2
	int x; 
	printf("Введите X: ");
	scanf_s("%d", &x);
	float w = a * exp(-sqrt(x)) * cos(b * x) + powf(c, 5.0);
	printf("w = %8.4f при x = %d\n", w, x);
	_getch();
	// w = -0.3977 при x = 1
	// w = -0.4067 при x = 2

	system("cls");

	// вариант 2: x1 = 1, x2 = 2
	printf("Введите X: ");
	scanf_s("%d", &x);
	float A = 0.7, B, C = 2.1;
	float y = sin(x) / sqrtf(1 + powf(A, 2.0) * powf(sin(x), 2.0)) - C * log(A * x);
	printf("y = %8.4f при x = %d\n", y, x);
	_getch();
	// y = 1.4741 при x = 1
	// y = 0.0605 при x = 2

	system("cls");



	printf("__________________________________________\n");
	printf("|  №  |  x  |  a  |  b  |  c  |  Result  |\n");
	printf("__________________________________________\n");

	// вариант 3
	float x1 = 0.0, x2 = 2.0; A = 2.0, B = 1.2, C = 1.0;
	float z1 = sqrtf(A + B - exp(sin(x1)) + C);
	float z2 = sqrtf(A + B - exp(sin(x2)) + C);
	printf("|  3  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, z1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, z2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 4
	x1 = 1.0, x2 = 2.0, A = 4.1, B = -2.3;
	float w1 = (pow(x1, 3) + pow(A, 2) * cos(2 * x1)) / (x1 + sqrtf(A + B * sin(3 * x1)));
	float w2 = (pow(x2, 3) + pow(A, 2) * cos(2 * x2)) / (x2 + sqrtf(A + B * sin(3 * x2)));
	printf("|  4  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, w1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, w2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 5
	x1 = -1, x2 = 1, A = 0.5, B = 2.0, C = 1.5;
	float y1 = B * pow(x1, 2) * exp(A * pow(x1, 2)) + A * sqrt(x1 + 1.5);
	float y2 = B * pow(x2, 2) * exp(A * pow(x2, 2)) + A * sqrt(x2 + 1.5);
	printf("|  5  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, y1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, y2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 6 
	x1 = 2, x2 = 4, A = 0.5, B = 1.3;
	z1 = exp(-A * x1) * ((x1 + pow(x1 + A, 1 / 4)) / (x1 + sqrt(x1 - B)));
	z2 = exp(-A * x2) * ((x2 + pow(x2 + A, 1 / 4)) / (x2 + sqrt(x2 - B)));
	printf("|  6  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, z1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, z2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 7 
	x1 = 0, x2 = 2, A = 0.5, B = 1.0;
	w1 = exp(-pow(A, 2)) * sqrt(x1 + 1) + exp(B * x1) * pow(x1 + 1, 1 / 3);
	w2 = exp(-pow(A, 2)) * sqrt(x2 + 1) + exp(B * x2) * pow(x2 + 1, 1 / 3);
	printf("|  7  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, w1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, w2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 8
	x1 = -1, x2 = 1, A = 2.7, B = 1.7;
	y1 = pow(A, 2) / ((x1 + 2) * exp(-B * x1)) + log(A + B * x1);
	y2 = pow(A, 2) / ((x2 + 2) * exp(-B * x2)) + log(A + B * x2);
	printf("|  8  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, y1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, y2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 9 
	x1 = 0, x2 = PI/2, A = 2.0, B = 0.7, C = 0.5;
	z1 = pow(A, 3) * cos(B * x1 * pow(sin(x1), 2)) + pow(C, 1 / 3);
	z2 = pow(A, 3) * cos(B * x2 * pow(sin(x2), 2)) + pow(C, 1 / 3);
	printf("|  9  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, z1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, z2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 10 
	x1 = 1, x2 = 0, A = 0.5, B = 2.9, C = 1.5;
	w1 = (A * x1 + pow(2, -x1) * cos(B * x1)) / (B * x1 - exp(-x1) * sin(B * x1) + C);
	w2 = (A * x2 + pow(2, -x2) * cos(B * x2)) / (B * x1 - exp(-x2) * sin(B * x2) + C);
	printf("| 10  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, w1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, w2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 11 
	x1 = 1, x2 = 2, A = 1.5, B = -1.2;
	y1 = exp(-A * x1) * pow(A * x1 + B * sin(2 * x1), 1 / 3);
	y2 = exp(-A * x2) * pow(A * x2 + B * sin(2 * x2), 1 / 3);
	printf("| 11  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, y1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, y2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 12
	x1 = 1, x2 = 2, A = 0.5, B = 1.7, C = 2;
	z1 = exp(-B * x1) * sin(C * x1 + B) - sqrt(B * x1 + A);
	z2 = exp(-B * x2) * sin(C * x2 + B) - sqrt(B * x2 + A);
	printf("| 12  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, z1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, z2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 13
	x1 = -1, x2 = 1, A = 0.5, B = 1.2;
	w1 = pow(2, -x1) * atan(x1 + A) - pow(3, -B * x1) * cos(B * x1);
	w2 = pow(2, -x2) * atan(x2 + A) - pow(3, -B * x2) * cos(B * x2);
	printf("| 13  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, w1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, w2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 14
	x1 = 1, x2 = 2, A = 0.5, B = 3.1;
	y1 = sqrt(fabsf(A * x1 * pow(sin(x1), 2))) + exp(-2 * x1) * (x1 + B);
	y2 = sqrt(fabsf(A * x2 * pow(sin(x2), 2))) + exp(-2 * x2) * (x2 + B);
	printf("| 14  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, y1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, y2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 15
	x1 = 1, x2 = 2, A = 0.5, B = 3.2;
	z1 = exp(2 * x1) * log(A + x1) - pow(B, 3 * x1) * log10(B - x1);
	z2 = exp(2 * x2) * log(A + x2) - pow(B, 3 * x2) * log10(B - x2);
	printf("| 15  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, z1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, z2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 16
	x1 = 0, x2 = 1, A = 1, B = 2, C = 4;
	w1 = sqrt(fabsf(x1 - A) - pow(fabsf(x1), 1 / 3)) / (A + B * pow(x1, 3) + C * pow(x1, 2));
	w2 = sqrt(fabsf(x2 - A) - pow(fabsf(x2), 1 / 3)) / (A + B * pow(x2, 3) + C * pow(x2, 2));
	printf("| 16  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, w1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, w2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 17
	x1 = 0, x2 = 1, A = 1, B = 3;
	y1 = (B + exp(x1 - 1)) / (A + x1 * fabsf(x1 - tanf(x1)));
	y2 = (B + exp(x2 - 1)) / (A + x2 * fabsf(x2 - tanf(x2)));
	printf("| 17  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, y1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, y2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 18
	x1 = -1, x2 = 2, A = 1, B = 2;
	z1 = (A + cos(x1 - B)) / (pow(x1, 4) / 2 + pow(sin(x1), 2));
	z2 = (A + cos(x2 - B)) / (pow(x2, 4) / 2 + pow(sin(x2), 2));
	printf("| 18  |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x1, A, B, z1);
	printf("|     |%5.2f|%5.2f|%5.2f|  -  |%10.3f|\n", x2, A, B, z2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 19
	x1 = 1, x2 = 2, A = 2, B = 3, C = 1;
	w1 = fabsf(log(B - sqrt(fabsf(x1)))) * (pow(x1, 2) - C / (A + x1 / 4));
	w2 = fabsf(log(B - sqrt(fabsf(x2)))) * (pow(x2, 2) - C / (A + x2 / 4));
	printf("| 19  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, w1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, w2);
	//_getch();
	printf("__________________________________________\n");
	// вариант 20
	x1 = -1, x2 = 1, A = 2, B = PI / 6, C = 0.5;
	y1 = (A * cos(x1 - B)) / (C + pow(sin(x1), 2)) + pow(2, x1);
	y2 = (A * cos(x2 - B)) / (C + pow(sin(x2), 2)) + pow(2, x2);
	printf("| 20  |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x1, A, B, C, y1);
	printf("|     |%5.2f|%5.2f|%5.2f|%5.2f|%10.3f|\n", x2, A, B, C, y2);
	printf("__________________________________________\n");
	_getch();
}