#include <stdio.h>

/**
 *main - entry point
 *Description: Find and print the largest prime facetor
 *The number: 612852475143
 *Return: 0
 */
int main(void)
{
	long long number = 612852475143
	long long largest_prime = 1;

	for (long long i = 2; i * i <= number; i++)
	{
		while (number % i == 0)
		{	largest_prime = i;
			number /= i;
		}
	}

	if (number > 1)
	{
		largest_prime = number;
	}
	printf("%lld\n", largest_prime);
	return (0);
}

