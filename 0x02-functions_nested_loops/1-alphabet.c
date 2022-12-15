#include "main.h"
/**
 * print_alphabet - Print alphabets in lower case followed by a new line
 * Description: You can only use _putchar twice in the code
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
