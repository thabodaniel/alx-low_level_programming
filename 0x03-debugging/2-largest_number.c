#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = a; // Assume a is the largest

	if (b > largest)
	{
		largest = b; // Update largest to b if b is greater
	}

	if (c > largest)
	{
		largest = c; // Update largest to c if c is greater
	}
	return (largest);
}
