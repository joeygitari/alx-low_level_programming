#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; j < n && src[j]; i++, j++)
	{
		dest[i] = src[j];

	}

	return (dest);
}


