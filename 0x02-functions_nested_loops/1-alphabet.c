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
	for ( i='a', i<='z', i++)

		_putchar(i);
	_putchar("\n");

}
