#include "main.h"

/**
 * puts2 - prints every character of string
 * starting with first character followed by newline
 * @str: character pointer
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		i++;
	}
}
