#include "main.h"
/**
 * main - Write a program that prints _putchar, followed by a new line
 * Description: Program should return 0
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
