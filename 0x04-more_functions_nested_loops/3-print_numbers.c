#include "main.h"

/**
 * print_most_numbers - Print numbers 0 to 9
 * Description: Can only use _putchar twice
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
	       _putchar(i + '0');
	       
	       i++;
	}
	_putchar('\n');
}
