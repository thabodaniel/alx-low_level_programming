#include "main.h"
/**
 *Description: _isalpha
 *c checks for alphabetic character
 *Returns 1 if uppercase or lowercase
 *Returns 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
