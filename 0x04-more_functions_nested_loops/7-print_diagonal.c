#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n : length of diagonal line
 * Return: void return type
 */

void print_diagonal(int n)
{
	int j, k;

	if (n > 0)
	{
		j = 0;
		while (j < n)
		{
			k = 0;
			while (k < j)
			{
				_putchar(' ');
				k++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
