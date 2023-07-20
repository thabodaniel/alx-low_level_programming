#include "main.h"
/**
 *print_line: function prints straight line in terminal
 *@n: is the number of the times _ will be printed
 *Description: Line should end with \n
 *Condition: if n >= 0 the function should print \n
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
