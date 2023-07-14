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

	printf("Size of a char: %ld byte(s)\n", sizeof(TypeChar));
	printf("Size of an int: %ld bytes(s) \n", sizeof(TypeInt));
	printf("Size of a long int: %ld bytes(s) \n", sizeof(TypeLongInt));
	printf("Size of a long long int: %ld bytes(s) \n", sizeof(Typex2Long_Int));
	printf("Size of a float: %ld byte(s) \n", sizeof(TypeFloat));
	return (0);
}
