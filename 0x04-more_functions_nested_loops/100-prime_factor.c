#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largest = 0;

	while (num != 1)
	{
		if ((num % divisor) == 0)
		{
			num = num / divisor;
			largest = divisor;
		}
		divisor = divisor + 1;
	}
	printf("%ld\n", largest);
	return (0);
}
