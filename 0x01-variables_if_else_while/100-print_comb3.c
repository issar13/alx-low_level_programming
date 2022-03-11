#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 32; n <= 55; n++)
	{
		for (m = 36; m <= 59; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 55 || m != 59)
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
