#include "main.h"
/**
 *more_numbers: prints 10 times the number, 0 to 14
 *Description: Only use _putchar 3 times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar ('0' + j / 10);
			}
			_putchar ('0' + j % 10);
		}
		_putchar ("\n");
	}
}
