#include "main.h"

int exact_sqrt_recursion(int j, int i);

/**
 * _sqrt_recursion - function to print square root of a number
 *
 * @n: input integer to fin its square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (exact_sqrt_recursion(n, 0));
}

/**
 * exact_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int exact_sqrt_recursion(int j, int i)
{
	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	return (exact_sqrt_recursion(j, i + 1));
}
