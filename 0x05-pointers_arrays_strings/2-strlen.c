#include "mai.h"

/**
 *_strlen - returns length of string
 *@s: character string to return length of
 *Return: length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;

	return (a);
}
