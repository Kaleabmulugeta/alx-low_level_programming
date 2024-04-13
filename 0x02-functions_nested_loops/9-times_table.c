#include "main.h"

/**
 * times_table - prints the times table 0 through 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int j;
	int i;
	int x;
	int tmp;

	for (i = 0; i < 10; i++)
	{
		tmp = 0;
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (x < 10)
			{
				_putchar(x + 48);
			}
			else
			{
				_putchar((int) (x / 10) + 48);
				_putchar(x % 10 + 48);
			}
			if (tmp != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (tmp != 9 && !(i * (j + 1) > 9))
			{
				_putchar(' ');
			}
			tmp++;
		}
		_putchar('\n');
	}
}
