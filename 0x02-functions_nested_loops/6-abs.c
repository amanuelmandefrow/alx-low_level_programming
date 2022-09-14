#include "headers.h"
#include <stdio.h>
/**
 * _abs - compute the absolute value of integer
 *
 * Return: alwatys the absolute value of the integer
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else 
		return (n * -1);
}
