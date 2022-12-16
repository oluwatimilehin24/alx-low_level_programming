#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of even fibonacci numbersup to a fib value
 * not exceeding 4,000,000.
 * Return: Always 0
 */
int main(void)
{
	int a = 1, b = 2, i = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			i += b;

		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", i);
	return (0);
}
