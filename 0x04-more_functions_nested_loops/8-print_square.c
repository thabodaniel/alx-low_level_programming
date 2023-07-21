#include "main.h"
/**
 *print_square: function that prints a square
 *@size:size of the square
 *Description: Only use _putchar to print
 *Use # character to print square
 *Condition: if size <= 0, function should print /n
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}

