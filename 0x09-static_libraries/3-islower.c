#include "headers.h"

/**
 * _islower - check for the lowercase
 *
 * Return: 1 for the lowercase else 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
