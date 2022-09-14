#include "headers.h"
#include <stdio.h>

/**
 * _abs - compute the absolute value of the integer
 * 
 * Return: always 0 (Success)
 */
int _abs(int c)
{
 if (c > 0 || c == 0)
 {
  return (c);
 }
 else 
 return (c * -1);
}