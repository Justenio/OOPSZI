#include "math.h"
double f(double x)
{
	return (x <= 3) ? pow(x, 2) + 3 * x + 9 : (sin(x)) / (pow(x, 2) - 9);
}
