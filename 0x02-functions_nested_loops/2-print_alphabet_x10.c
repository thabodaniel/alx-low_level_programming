i#include "main.h"
/*print the alphabet
 *ten times
 *return:always 0 Success
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
			_putchar("\n");
		}
	}
}

