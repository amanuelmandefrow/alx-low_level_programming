#include "main.h"

/**
 * _strchr - functions that locates character in string
 * @s: character type string pointer
 * @c: character to be find in the s string
 *
 * Return: the first occurance of the character c;
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
