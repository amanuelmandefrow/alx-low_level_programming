#include "main.h"

/**
 * reverse - find reverse of the string
 * @s: char type string
 *
 * Return: nothing
 */
void reverse(char *s)
{
	if (*s)
	{
		reverse(s+1);
		_putchar(*s);
	}
}

/**
 * is_palindrome - returns 1 if string is palindrome otherwise 0
 * @s: char type pointer string
 *
 * Return: 1 if string palindrome 0 if not
 */
int is_palindrome(char *s)
{
	char *str = reverse(char *s);

	if (*str == *s)
		return (1);
	else
		return (0);
}
