#include "main.h"

/**
 * _strcpy - function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	k = 0;

	while (k >= 0)
	{
		*(dest + k) = *(src + k);
		if (*(src + k) == '\0')
			break;
		k++;
	}
	return (dest);
}
