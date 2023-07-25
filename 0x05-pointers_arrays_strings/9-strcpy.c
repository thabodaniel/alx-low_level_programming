#include "main.h"

/**
 *_strcpy - copies string
 *@dest: Character type array
 *@src: Charcater type array
 *Description: String should be copied to src
 *Included is the terminating null byte (\0)
 *That is to the buffer pointed to by dest
 *Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
