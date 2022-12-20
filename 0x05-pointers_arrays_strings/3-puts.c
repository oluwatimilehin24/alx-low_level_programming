#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
