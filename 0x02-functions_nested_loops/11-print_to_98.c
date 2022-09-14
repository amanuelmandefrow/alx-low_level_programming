#include <stdio.h>
#include "headers.h"

/**
 * print_to_98 - print numbers stsrting from n to 98
 * @n: integer number entered
 *
 * Return: void return type
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (i > 98)
	{
		while (i >= 98)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
			i--;
		}
	}
	else if (i <= 98)
	{
		while (i <= 98)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
			i++;
		}
	}
	putchar('\n');
}
