#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
}
