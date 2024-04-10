#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ft = 'z';
	int i = 52;

	while (i > 26)
	{
		putchar(ft);
		ft--;
		i--;
	}
	putchar('\n');
	return (0);
}
