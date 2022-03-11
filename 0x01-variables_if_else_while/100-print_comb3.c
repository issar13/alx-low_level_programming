#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 46; n <= 54; n++)
	{
		for (m = 47; m <= 55; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 54 || m != 55)
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
