#include "main.h"

/**
 * _memset - a function that fills memory with constant byte
 * @s : char pointer to address of byte
 * @b: character byte to fills
 * @n: numbers of fills
 *
 * Return: character pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
