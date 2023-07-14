#include<stdio.h>
/**
 *Main - Entry point
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

	printf("Size of a char: %ld byte(s)\n",sizeof(char));
	printf("Size of an int: %ld bytes(s) \n",sizeof(int));
	printf("Size of a long int: %ld bytes(s) \n",sizeof(long int));
	printf("Size of a long long int: %ld bytes(s) \n",sizeof(long long int));
	printf("Size of a float: %ld byte(s) \n",sizeof(float));
	return (0);
}
