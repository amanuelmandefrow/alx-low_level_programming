#include "main.h"

/**
 * _strlen - return the length of string
 * @s : character pointer
 *
 * Return: integer number k
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (*(s + k) != '\0')
	{
		k++;
	}
	return (k);
}
