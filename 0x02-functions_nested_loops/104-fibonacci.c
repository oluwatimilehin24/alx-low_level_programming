#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be comma and space seperated.
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a1 = 0, b1 = 1, a2 = 0, b2 = 2;
	unsigned long int d, e, f;
	int i;

	printf("%lu, %lu, ", b1, b2);
	for (i = 2; i < 98; i++)
	{
		if (b1 + b2 > LARGEST || a2 > 0 || a1 > 0)
		{
			d = (b1 + b2) / LARGEST;
			e = (b1 + b2) % LARGEST;
			f = a1 + a2 + d;
			a1 = a2, a2 = f;
			b1 = b2, b2 = e;
			printf("%lu%010lu", a2, b2);
		}
		else
		{
			e = b1 + b2;
			b1 = b2, b2 = e;
			printf("%lu", b2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
