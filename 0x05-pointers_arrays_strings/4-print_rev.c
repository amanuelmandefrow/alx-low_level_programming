#include "main.h"

/**
 * print_rev - print string in reverse followed by newline
 * @s: character pointer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int k, i;

	k = 0;
	while (s[k] != '\0')
		k++;
	k--;
	for (i = k; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
