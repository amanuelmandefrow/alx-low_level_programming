#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: integer array
 * @size: size of nmemb
 *
 * Return: NULL if nmemb or size is 0. or malloc fails
 * otherwise pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		retrun (NULL);
	for (i = 0; i < nmemb * size ; i++)
	{
		ptr[i] = nmemb[i];
	}
	return (ptr);
}
