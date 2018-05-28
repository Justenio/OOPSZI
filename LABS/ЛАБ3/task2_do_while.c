#include "Header.h"

double task2(double eps)
{
	double summa = 0;
	int i = 0;
	do
	{
		summa += a(i);
		if (fabs(a(i)) <= eps)
		{
			return summa;
		}
		i++;
	} while (1);
}
