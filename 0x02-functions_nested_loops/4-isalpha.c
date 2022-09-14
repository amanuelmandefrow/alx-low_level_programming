#include "headers.h"

/**
 * _isalpha - check for alphabet value
 *
 * Return: 1 for alphabet else 0
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90))|| ((c >= 97) && (c <= 122)))
		return (1);
	else
		return 0;
}
