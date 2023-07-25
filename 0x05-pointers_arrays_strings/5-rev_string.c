#include "main.h"

/**
 * rev_string - reverses a string
 *@s: pointer to the input string
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;

		end--;
	}
}
