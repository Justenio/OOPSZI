#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	system("chcp 1251");	/*������� � ������� �� ������� ����*/
	system("cls");			/*������� �������*/
	float x, y, z;			/*����������� ���� ����������*/
	x = 2;
	y = 5;
	z = ((sqrt(x) - sqrt(y)) / x);
	printf("������������ ������ �1\n\n");
	printf("��� x = 2, y = 5, ��������� = %f\n", z);
	printf("\n---===<<<������� �>>>===---\n(��� ���� � �� ������ ���� ����� 0)\nX=");
	scanf_s("%f", &x);
	printf("\n---===<<<������� Y>>>===---\n(��� ���� Y �� ������ ���� ����� X)\nY=");
	scanf_s("%f", &y);
	z = ((sqrt(x) - sqrt(y)) / x);
	printf("��������� = %f", z);
	getchar();
	getchar();
	return(0);
}