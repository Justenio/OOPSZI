#include "Header.h"

int task4(double eps)
{
	int i = 0;
	do
	{
		if (fabs(a(i)) <= eps)
		{
			break;
		}
		i++;
	} while (1);
	return i;
}
