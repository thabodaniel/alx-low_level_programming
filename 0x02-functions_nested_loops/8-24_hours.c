#include "main.h"
/**
 *jack_bauer print every minute
 *Returns minutes
 */
void jack_bauer(void)
{
	int n = 0;
	int a = 0, b = 0, c = 0, d = 0;

	while (n < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		n++;
	}
}
