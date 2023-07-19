#include "main.h"
/**
 *Description: int _islower(int c)
 *c checks for
 *lowerecase character
 *Returns 1 is lowercase
 *Returns 0 is otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
