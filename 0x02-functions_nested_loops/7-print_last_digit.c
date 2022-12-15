#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type int number
 * Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int na;

	if (n < 0)
	{
		na = -1 * (n % 10);
		_putchar (na + '0');
		return (na);
	}
	else
	{
		na = n % 10;
		_putchar (na + '0');
		return (na);
	}
}

