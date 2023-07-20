#include "main.h"
/**
 *_abs computes the absolute value of integer
 *Return the value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n == 0 || n > 0)
	{
		return (n);
	}
}
