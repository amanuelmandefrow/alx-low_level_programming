#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character pointer
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, k;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; j < (i - 1); ++j)
	{
		for (k = j + 1; k > 0; --k)
		{
			temp = s[k];
			s[k] = s[k - 1];
			s[k - 1] = temp;
		}
	}
}
