#include "main.h"
/**
 *print_sign checks the sign of number
 *@n: the number to be checked
 *Returns 1 if n is greater than zero
 *Returns 0 if n is zero
 *Returns -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{	
		_putchar ('0');
		return (0);
	}
	else
	{	
		_putchar ('-');
		return (-1);
	}
}
