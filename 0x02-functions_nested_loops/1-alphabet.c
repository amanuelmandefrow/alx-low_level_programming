#include "headers.h"
/**
 * print_alphabet - Enter point 
 *
 * Return: has return type void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
