#include "main.h"

/**
 * puts_half - prints half of a string
 * @str : character pointer
 *
 * Return : nothing
 */
void puts_half(char *str)
{
	int k, n;

	k = 0;
	while (str[k] != '\0')
		k++;
	if (k % 2 == 1)
		n = k / 2;
	else
		n = (k -1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\0');
}

