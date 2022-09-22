#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (src[i])
	{
		i++;
	}

	for (j = 0; j < n && j <= i; j++)
	{
		dest[j] = src[j];
	}

	for(; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);

}

