#include "main.h"
/**
 *print_numbers: functions prints 0 to 9
 *Description: only use _putchar twice
 */

void print_numbers(void)
{

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	_putchar ("/n");
	return (0);
}
