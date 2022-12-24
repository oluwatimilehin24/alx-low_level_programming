#include "main.h"

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
		_putchar('-');
		x *= -1;
	}

	x = n;

	if (x / 10)
		putchar(x / 10);
	
	putchar(x % 10 + '0');
}
