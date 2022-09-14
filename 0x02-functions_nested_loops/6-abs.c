#include "headers.h"
#include <stdio.h>
/**
 * _abs - compute the absolute value of integer
 *
 * Return: alwatys the absolute value of the integer
 */
int _abs(int num)
{
	if (num > 0 || num == 0)
		return (num);
	else 
		return (num * -1);
}
