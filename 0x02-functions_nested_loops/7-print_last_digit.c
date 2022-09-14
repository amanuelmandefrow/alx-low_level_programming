#include "headers.h"
/**
 * print_last_digit  - print last digit of number n
 * @n: entered number
 *
 * Return: last digit of number n
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (n < 0)
		result = result * -1;
	_putchar(result + '0');
	return (result);
}
