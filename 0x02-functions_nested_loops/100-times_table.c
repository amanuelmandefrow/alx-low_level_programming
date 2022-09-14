#include "headers.h"
/**
 * print_times_table - print the multiplication tables of n times
 * @n: integer number
 *
 * Return: has void return type
 */
void print_times_table(int n)
{
	int product, result, i, j;

	if((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				product = i * j;
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 100)
				{
					result = product / 10;
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
