#include "main.h"
/**
 *print_last_digit checks the last value of digit
 *n is the last value to be checked
 *Returns the last value
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
		x = n % 10;
	}
	if (x < 0)
	{
		x = -x;
		_putchar(x + '0');
	}
	return (x);
}
