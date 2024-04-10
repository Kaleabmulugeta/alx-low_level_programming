#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	char ft = 'A';

	for (i = 0; i < 10; i++)
		putchar(i + 48);
	for (j = 0; j < 6; j++)
	{
		putchar(ft);
		ft++;
	}
	putchar('\n');
	return (0);
}
