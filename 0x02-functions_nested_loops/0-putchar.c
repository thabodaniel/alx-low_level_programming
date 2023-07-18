#include "main.h"

/**
 *
 *
 *
 */

int main (void)
{
	char statement[] = "_putchar";
	int i = 0;

	while (statement[i] != '\0')
	{
		_putchar(_putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
