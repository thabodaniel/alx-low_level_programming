#include "main.h"
/**
 *print_triangle: prints a triangle
 *@size: the size of the triangle
 *Description: only use _putchar to print
 *Use # character to print triangle
 *Condition: if size <=0 function should print \n
 */

void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
		_putchar('\n');
}
