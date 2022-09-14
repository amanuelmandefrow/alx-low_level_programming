#include "headers.h"

/**
 * jack_bauer - print time count up
 *
 * Return: void type return
 */
void jack_bauer(void)
{
	int hours = 0, minutes = 0;
	int hours_remainder, minutes_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			minutes_remainder = minutes % 10;
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
