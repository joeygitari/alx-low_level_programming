#include "main.h"

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);

	return (sqrt2(a, b + 1));
}

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
