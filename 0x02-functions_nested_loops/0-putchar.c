#include <stdio.h>
#include "main.h"

int main(void)
{
	int i; 
	char name[] = "_putchar";
	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return(0);
}

