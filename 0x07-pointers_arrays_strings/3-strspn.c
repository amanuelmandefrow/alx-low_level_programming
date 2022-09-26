#include "main.h"

/**
 * _strspn - function that gets the length of 
 * a prefix substring
 * @s: string
 * @accept: string 
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i, j, l;

	i = 0;
	while (*(s + i) != '\0')
	{
		t = 0;
		for (j = 0; *(accept + j) != '\0'; ++j)
		{
			if (s[i] == accept[j])
				t = 1;
		}
		j = 0;
		if (t == 0)
			break;
		k++;
		i++;
	}
	return (k);
}
