#include "headers.h"

/**
 * print_sign - check sign for intiger n
 *
 * Return: 1 for n > 0, 0 for n = 0 or -1 for n < 1;
 */
int print_sign(int n)
{
	int type;

	if (n > 0)
	{
		_putchar('+');
	type = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		type = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		type = -1;
	}
	return (type);
}
