#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float func();
float x, y, z;
int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	x = 2;
	y = 5;
	func();
	printf("��� x = 2, y = 5, ��������� = %f\n", z);
	printf("\n---===<<<������� �>>>===---\n(��� ���� � �� ������ ���� ����� 0)\nX=");
	scanf_s("%f", &x);
	printf("\n---===<<<������� Y>>>===---\n(��� ���� Y �� ������ ���� ����� X)\nY=");
	scanf_s("%f", &y);
	func();
	printf("��������� = %f", z);
	getchar();
	getchar();

	return(0);
}
float func(void)
{
	z = ((sqrt(x) - sqrt(y)) / x);
	return(0);
}
