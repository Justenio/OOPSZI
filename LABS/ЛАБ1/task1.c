#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	system("chcp 1251");	/*Переход в консоли на русский язык*/
	system("cls");			/*Очистка консоли*/
	float x, y, z;			/*Определение типа переменных*/
	x = 2;
	y = 5;
	z = ((sqrt(x) - sqrt(y)) / x);
	printf("ЛАБОРАТОРНАЯ РАБОТА №1\n\n");
	printf("При x = 2, y = 5, результат = %f\n", z);
	printf("\n---===<<<Введите Х>>>===---\n(При этом Х не должен быть равен 0)\nX=");
	scanf_s("%f", &x);
	printf("\n---===<<<Введите Y>>>===---\n(При этом Y не должен быть равен X)\nY=");
	scanf_s("%f", &y);
	z = ((sqrt(x) - sqrt(y)) / x);
	printf("Результат = %f", z);
	getchar();
	getchar();
	return(0);
}