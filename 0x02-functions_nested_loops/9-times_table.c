#include "headers.h"
/**
 * times_table - print the 9 times table
 *
 * return: has void retur type
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
