#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file and new line
 * @argc: is arguement count
 * @argv is arguement vector[]
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
