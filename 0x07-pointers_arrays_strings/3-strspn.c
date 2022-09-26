#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k += 1;
				break;
			}
		}
		if (*(s + i) != *(accept + j))
		{
			break;
		}
	}

	return ((unsigned int) k);
}

