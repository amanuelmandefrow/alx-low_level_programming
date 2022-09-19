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
		n = k / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\0');
}

