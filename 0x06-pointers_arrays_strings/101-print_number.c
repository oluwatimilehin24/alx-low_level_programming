#include "main.h"
#include <stdio.h>

/**
 * print_number - prints any integer with putchar
 * @n: Number to prints
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-')
	}
	else
		x = n;

	if (x / 10)
		print_number(x / 10);
	
	_putchar((x % 10) + '0');
}
