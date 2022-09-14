#include <stdio.h>
/**
 * main -Entry point
 * Desc: print first 50 fibonaci number
 *
 * Return: Always 0(Succcess)
 */
int main(void)
{
	long int i, num1, num2, sum;

	num1 = 1;
	num2 = 1;
	sum = num1 + num2;
	printf("%ld, %ld, ", num2, sum);
	for (i = 1; i < 49; i++)
	{
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
		if (i == 48)
			printf("%ld\n", sum);
		else
			printf("%ld, ", sum);
	}
	return (0);
}
