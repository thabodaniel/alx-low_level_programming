#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: char array string type
 */

void rev_string(char *s)
{
	int a, b, c;
	char i;

	for (a = 0; s[a] != '\0'; a++)
		;

	c = a;
	for (a--, b = 0; b < c / 2; a--, b++)
	{
		i = s[b];
		s[b] = s[a];
		s[a] = i;
	}
}
