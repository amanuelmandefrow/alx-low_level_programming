#include <stdio.h>
/**
 * main -Entry point
 * Desc: print first 50 fibonaci number
 *
 * Return: Always 0(Succcess)
 */
int main(void)
{
	int i, num1, num2, sum;

	num1 = 0;
	num2 = 1;
	sum = num1 + num2;
	printf("%d, %d, ", num1, num2);
	for (i = 1; i < 49; i++)
	{
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
		if (i == 48)
			printf("%d\n", sum);
		else
			printf("%d, ", sum);
	}
	return (0);
}
