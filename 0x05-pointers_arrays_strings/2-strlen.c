#include "mai.h"

/**
 *_strlen - returns length of string
 *@*s: string to return length of
 *Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
