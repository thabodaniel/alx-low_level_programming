#include "main.h"

/**
 *void swap_int(int *a, int *b) swaps values of integers
 *@a: value to be swapped with @b value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
