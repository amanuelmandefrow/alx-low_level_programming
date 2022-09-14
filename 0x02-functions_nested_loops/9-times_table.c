#include "headers.h"
/**
 * times_table - print the 9 times table
 *
 * return: has void retur type
 */
void times_table(void)
{
	int i, j, result;

	i = 0;
	while (i <= 9)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		i++;
	}
}