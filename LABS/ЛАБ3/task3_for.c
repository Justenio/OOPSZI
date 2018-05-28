#include "Header.h"

void task3(int n, int k)
{
	for(int i = 0; i < n; i++)
	{
		if (((i + 1) % k) == 0)
		{
			continue;
		}

		if (a(i) < 0)
		{
			printf("a[%d] = %.50f\n", i, a(i));
		}
		else
		{
			printf("a[%d] =  %.50f\n", i, a(i));
		}
	}
}
