#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string(string to be concatenated on it)
 * @s2: second string (string to be concatrenated)
 * @n: amount of bytes.
 *
 * Return: NULL if the function fails otherwise return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	ptr = malloc((sizeof(char) * i) + n);
	for (i = 0; *s != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}
	if (ptr == NULL)
		return (NULL);
	ptr[i + j] = '\0';
	return (ptr);
}
