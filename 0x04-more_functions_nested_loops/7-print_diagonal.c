#include "main.h"
/**
 *print diagonal: function prints diagonal line in terminal
 *@:n is the number of times \ will be printed
 *Description: Line should end with \n
 *Condition: if n <= 0 function should only print \n
 */

void print_diagonal(int n)
{
	int j, i;

	j = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
		_putchar('\n');
}
