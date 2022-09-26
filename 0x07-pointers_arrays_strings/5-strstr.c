#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, l;

	l= 0;
	while (*(needle + l))
		l++;
	for (i = 0; *(haystack + i); i++)
	{
		for (j = 0; *(needle + j) && *(haystack + i + j); j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
		}
		if (j == l)

			return ((haystack + i));
	}

	return (0);
}
