#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(int)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 10; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
}`
