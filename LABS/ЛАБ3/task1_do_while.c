#include "Header.h"

double task1(int n)
{
	long double summa = 0;
	int i = 0;
	do
	{
		summa += a(i);
		i++;
	} while (i < n);
	return summa;
}
