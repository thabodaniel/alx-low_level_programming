#include "main.h"
/**
 *print diagonal: function prints diagonal line in terminal
 *@:n is the number of times \ will be printed
 *Description: Line should end with \n
 *Condition: if n <= 0 function should only print \n
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	for (i = 0; i < n; i++)
	{
		int space = i;

		while (space > 0)
		{
			_putchar (' ');
			space--;
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
