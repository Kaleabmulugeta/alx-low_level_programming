#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ft = 'a';
	char ft2 = 'A';
	int i = 1;
	int j = 1;

	while (i < 27)
	{
		putchar(ft);
		ft++;
		i++;
	}
	while (j < 27)
	{
		putchar(ft2);
		ft2++;
		j++;
	}
	putchar('\n');
	return (0);
}
