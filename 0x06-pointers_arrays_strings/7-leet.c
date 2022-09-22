#include "main.h"

char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; a[j]; j++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
	}

	return (str);
}
