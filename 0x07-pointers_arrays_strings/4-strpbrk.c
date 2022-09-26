#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * s: string
 * @accept: string
 *
 * Return: return s if it match with accept Null otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (s[i] == accept[j])
				return s[i];
			j++;
		}
		i++;
	}
	return ('\0');
}
