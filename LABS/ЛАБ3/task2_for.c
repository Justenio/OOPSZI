#include "Header.h"

double task2(double eps)
{
	double summa = 0;
	for(int i = 0;; i++)
	{
		summa += a(i);
		if (fabs(a(i)) <= eps)
		{
			return summa;
		}
	}
}
