#include "main.h"

/**
 *puts_half - prints half of string
 *@str: Array char type to be printed
 *Description: Should only print half of string
 *If @str number is odd then print last n characters
 *n length_of_the_string - 1 / 2
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
