#include "main.h"
#include <stdio.h>
/**
 *print_array - prints the number of n elements in an array integers
 *@n: Integer array type
 *@a: Int array pointer
 *Description: n is the number of elements
 *Numbers to be seperated by commas
 *Numbers to be displayed in thesame order as strored in array
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
