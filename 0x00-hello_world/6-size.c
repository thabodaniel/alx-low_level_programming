#include<stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Sucess)
*/
 int main(void)
{
	char TypeChar;
	int TypeInt;
	long int TypeLongInt;
	long long int Typex2Long_Int;
	float TypeFloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(TypeChar));
	printf("Size of an int: %lu bytes(s) \n", (unsigned long)sizeof(TypeInt));
	printf("Size of a long int: %lu bytes(s) \n", (unsigned long)sizeof(TypeLongInt));
	printf("Size of a long long int: %lu bytes(s) \n", (unsigned long)sizeof(Typex2Long_Int));
	printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(TypeFloat));
	return (0);
}
