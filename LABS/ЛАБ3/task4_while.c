#include "Header.h"

int task4(double eps)
{
	int i = 0;
	while (1)
	{
		if (fabs(a(i)) <= eps)
		{
			break;
		}
		i++;
	} 
	return i;
}
