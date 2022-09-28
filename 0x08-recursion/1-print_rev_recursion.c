#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: char type string pointer
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
