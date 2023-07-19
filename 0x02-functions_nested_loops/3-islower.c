#include "main.h"
/**
 *Description: int _islower(int c)
 *c checks for  lowerecase character
 *_islower returns 1 if lowercase
 *Returns 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
