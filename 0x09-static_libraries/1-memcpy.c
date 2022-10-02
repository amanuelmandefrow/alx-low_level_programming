#include "main.h"

/**
 * _memcpy - function that copies memeory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bits to copy
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		++i;
	}
	return (dest);
}
