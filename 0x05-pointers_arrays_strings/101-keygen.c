#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int _rand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		_rand = (rand() % 125) + 1;
		printf("%c", _rand);
		total -= _rand;
	}
	printf("%c", total);

	return (0);
}
