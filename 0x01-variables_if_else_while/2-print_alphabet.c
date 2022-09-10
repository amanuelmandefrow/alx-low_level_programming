#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i;
	int ch;

	ch = 97;
	i = 0;
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar(10);
	return (0);
}