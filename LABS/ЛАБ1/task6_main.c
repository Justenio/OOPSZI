#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void f_result();
double x, y, f;

void main()
{
	x = 10; y = 20; f_result();
	printf("x = %f\ny = %f\nf = %f\n\n", x, y, f);
	printf("x = "); scanf("%lf", &x);
	printf("y = "); scanf("%lf", &y);
	f_result();
	printf("f = %f", f);
	_getch();
}
