#include "main.h"
/**
  *print_aphabet:
  *entry point
  *prints alphabets
  *in lower case
  *Return: Always 0(succes)
  */

void print_alphabet(void)
{
	char i;
	for ( i=97, i<=122, i++)
	{
		_putchar(i);
	}
	_putchar("\n");
	return (0);
}
