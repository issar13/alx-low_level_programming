#include "main.h"
/**
* main - prints a string
* Description: the string is "Issa"
*
* Return: 0
*/
int main(void)
{
	char issasulei[] = "Issasulei";
	int i = 0;

	while (issasulei[i] != '\0')
	{
		_putchar(issasulei[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
