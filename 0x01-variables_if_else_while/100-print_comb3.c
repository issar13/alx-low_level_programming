#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 46; n <= 57; n++)
	{
		for (m = 43; m <= 58; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 57 || m != 58)
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
