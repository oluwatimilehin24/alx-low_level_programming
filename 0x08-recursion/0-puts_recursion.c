#include "main.h"

/**
 * _puts_reaction - Print a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(++s);
	}
}
