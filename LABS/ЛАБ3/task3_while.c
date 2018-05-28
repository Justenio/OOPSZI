#include "Header.h"

void task3(int n, int k)
{
	int i = 0;
	while (i < n)
	{
		if (((i + 1) % k) == 0)
		{
			i++;
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
		i++;
	} 
}
