#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 47; n <= 55; n++)
	{
		for (m = 48; m <= 56; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
