#include "main.h"

int _strcmp( char *s1, char *s2)
{
	int i, j;

	j = 0;

	for ( i = 0; s1[i]; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			j = s1[i] - s2[i];
			break;
		}
	}
	return (j);
}

