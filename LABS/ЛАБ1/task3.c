#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

double f(double x, double y);

void main()
{
	double x = 10, y = 20;
	printf("x = %f\ny = %f\nf = %f\n\n", x, y, f(x, y));
	printf("x = "); scanf("%lf", &x);
	printf("y = "); scanf("%lf", &y);
	printf("f = %f", f(x, y));
	_getch();
}

double f(double x, double y)
{
	return ((sqrt(x) - sqrt(y)) / x);
}
