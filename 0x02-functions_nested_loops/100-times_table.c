#include "main.h"

/**
 * print_times_table - prints the times table 0 through 9
 *@n: int
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int sp = 3;
	int inc = 0;
	int i;
	int j;
	int num = 0;
	int dig;
	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		sp = 3;
		num = 0;
		for (j = 0; j <= n; j++)
		{
			if (num > 99)
			{
				_putchar((num / 100) + 48);
			}
			if (num > 9)
			{
				dig = (num / 10) - ((num / 100) * 10);
				_putchar(dig + 48);
			}
			_putchar((num % 10) + 48);

			if (j != n)
			{
				_putchar(',');

				if ((num + inc) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if ((num + inc) < 100)
					_putchar(' ');
				_putchar(' ');
			}
			num += inc;
		}
		_putchar('\n');
		inc++;
	}
}
