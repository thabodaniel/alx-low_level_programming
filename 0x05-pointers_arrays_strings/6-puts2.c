#include "main.h"

/**
 *puts2 - print all characteers of string, start with first one
 *@str: Character array to be printed
 *Description: It should be followed by a new line
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
