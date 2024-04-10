#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i == 9)
			break;
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
