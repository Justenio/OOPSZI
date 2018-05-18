#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func();
float x, y, z;
int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	x = 2;
	y = 5;
	func();
	printf("При x = 2, y = 5, результат = %f\n", z);
	printf("\n---===<<<Введите Х>>>===---\n(При этом Х не должен быть равен 0)\nX=");
	scanf_s("%f", &x);
	printf("\n---===<<<Введите Y>>>===---\n(При этом Y не должен быть равен X)\nY=");
	scanf_s("%f", &y);
	func();
	printf("Результат = %f", z);
	getchar();
	getchar();

	return(0);
}
float func(void)
{
	z = ((sqrt(x) - sqrt(y)) / x);
	return(0);
}
