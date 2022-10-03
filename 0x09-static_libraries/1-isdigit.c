#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: integer number
 * Return: 1 if c is digit otherwise 0
 */
int _isdigit(int c)
{
	return ((c >= 48) && (c < 58));
}
