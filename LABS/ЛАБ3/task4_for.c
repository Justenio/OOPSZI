#include "Header.h"

int task4(double eps)
{
	int i = 0;
	for(;; i++)
	{
		if (fabs(a(i)) <= eps)
		{
			break;
		}
	} 
	return i;
}
