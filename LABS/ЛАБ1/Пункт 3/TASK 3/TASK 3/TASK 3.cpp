#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func(float x, float y);

int main(void)
{
	system("chcp 1251");	/*������� � ������� �� ������� ����*/
	system("cls");			/*������� �������*/
	float x, y, z;
	x = 2;
	y = 5;
	z = func(x, y);
	printf("��� x = 2, y = 5, ��������� = %f\n", z);
	printf("\n---===<<<������� �>>>===---\n(��� ���� � �� ������ ���� ����� 0)\nX=");
	scanf_s("%f", &x);
	printf("\n---===<<<������� Y>>>===---\n(��� ���� Y �� ������ ���� ����� X)\nY=");
	scanf_s("%f", &y);
	z = func(x, y);
	printf("��������� = %f", z);
	getchar();
	getchar();
	return(0);
}

float func(float x, float y)
{
	float z;
	z = ((sqrt(x) - sqrt(y)) / x);
	return(z);
}
