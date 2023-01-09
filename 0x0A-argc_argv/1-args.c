#include "main.h"
#include <stdio.h>

/**
 * main - print number followed by new line
 * @argc: is arguement count
 * @argv: is vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
