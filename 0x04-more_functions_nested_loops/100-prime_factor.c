#include <stdio.h>
#include <math.h>

/**
 *main - entry point
 *Description: Find and print the largest prime facetor
 *The number: 612852475143
 *Return: 0
 */
int main(void)
{
	int i;
	long num = 612852475143;

	for (i = (int) sqrt(num); i > 2; c++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
