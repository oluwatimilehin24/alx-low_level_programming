#include "main.h"

/**
 * print_numbers - Print numbers 0 to 9, followed by a new line
 * Description: Can only use _putchar twice
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9', i++)
	{
	       _putchar(i);	       
	}
	_putchar('\n');
}
