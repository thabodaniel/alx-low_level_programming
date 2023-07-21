#include "main.h"

/**
 *print_number: functions prints an integer
 *@n:Number to be printed
 *Description: Only use _putchar to print
 *Not allowed to use long 
 *Not allowed to use arrays or pointers
 *Not allowed to hard-code special values
 */
void print_number(int n)
{
	#include "main.h"

/**
 * print_number: function prints an integer
 * @n: the integer to be printed
 * Description: only use _putchar to print the integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		_putchar('0' + n);
		return;
	}
	print_number(n / 10);
	_putchar('0' + (n % 10));
}
