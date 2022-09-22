#include "main.h"

char *string_toupper(char *str)
{
	int i, j;

	j = 'a' - 'A';

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= j;
		}

		else
		{
			continue;
		}

	}
	return (str);

}
