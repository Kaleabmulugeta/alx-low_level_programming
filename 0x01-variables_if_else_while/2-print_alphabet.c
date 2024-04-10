#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ft = 'a';
	int i = 1;

	while (i < 27)
	{
		putchar(ft);
		ft++;
		i++;
	}
	putchar('\n');
	return (0);
}
