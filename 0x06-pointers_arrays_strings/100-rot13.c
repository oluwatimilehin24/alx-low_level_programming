#include "main.h"

/**
 * rot13 - encode a string into rot13
 * @s: string to encode
 * Return: address of s
 */

char *rot13(char *s)
{
	int i, j;
	char storeh[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char store1[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + 1); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (storeh[j] == *(s + i))
			{
				*(s + 1) = store1[j];
				break;
			}
		}
	}

	return (s);
}
