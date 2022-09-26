#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: Pointer to the beginning of the located string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *str = haystack;
		char *str2 = needle;

		while (*str2 == haystack && *str2 != '\0' && *haystack != '\0')
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str);
		haystack = str + 1;
	}
	return ('\0');
}
