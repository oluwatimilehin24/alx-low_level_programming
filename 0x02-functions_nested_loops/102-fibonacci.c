#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numers must be coma and space seperated.
 * Return: Always 0
 */
int main(void)
{
	int i = 2;
	long int a = 1, b = 2;
	long int c;

	printf("%lu, ", a);
	while (count <= 50)
	{
		if (i == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}

		c = b;
		b += a;
		a = c;
		i++;
	}

	return (0);
}
