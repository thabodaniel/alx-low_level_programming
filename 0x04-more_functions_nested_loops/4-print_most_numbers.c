#include "main.h"
/**
 *print_most_numbers: prints numbers 0 to 9
 *Description: Do not print 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i + '0');
		}
	}
	_putchar ("\n");
}
