#include "main.h"
/**
 *Description: _isupper checks for uppercase character
 *@:c is the character to be checked
 *Returns 1 if c is uppercase
 *Otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
