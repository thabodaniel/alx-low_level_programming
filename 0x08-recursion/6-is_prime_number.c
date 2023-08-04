#include "main.h"

int exact_prime(int j, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (exact_prime(n, n - 1));
}

/**
 * exact_prime - calculates if a number is prime recursively
 * @j: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int exact_prime(int j, int i)
{
	if (i == 1)
		return (1);
	if (j % i == 0 && i > 0)
		return (0);
	return (exact_prime(j, i - 1));
}
