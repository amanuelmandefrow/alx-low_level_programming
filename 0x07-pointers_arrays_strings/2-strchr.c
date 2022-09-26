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
	unsigned int k;

	for (k = 0; *(s + i) != '\0', ++i)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
