#include "main.h"
/**
 *_isdigit description: Checks for digit
 *@:c is the digit to be checked
 *Returns 1 if c is digit
 *Otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
