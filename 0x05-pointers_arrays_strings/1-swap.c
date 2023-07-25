#include "main.h"

/**
 *swap_int - swaps values of integers
 *@a: Int value
 *@b: Int value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
