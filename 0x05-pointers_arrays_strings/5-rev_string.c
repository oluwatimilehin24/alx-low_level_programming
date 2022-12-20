#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array type string
 */

void rev_string(char *s)
{
	int i, c, l;
	char d;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		d = s[c];
		s[c] = s[i];
		s[i] = d;
	}
}
