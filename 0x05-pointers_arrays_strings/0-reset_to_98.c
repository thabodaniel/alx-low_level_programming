#include "main.h"

/**
 *void reset_to_98(int *n) take a pointer to int parameter
 *@*n:int parameterr to be taken
 *Description: Update the value it points to 98
 */
void reset_to_98(int *n)
{
	int a = 98;
	a = &n;
}
