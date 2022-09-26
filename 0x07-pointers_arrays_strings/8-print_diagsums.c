#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		sum2 += *(a + (i * size) + (size - i - 1));
	}

	printf("%d, %d\n", sum, sum2);
}
