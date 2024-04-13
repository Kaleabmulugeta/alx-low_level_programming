#include "main.h"

/**
 * print_times_table - prints the times table 0 through 9
 *@n: int
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int j;
	int i;
	int x;
	int ld;
	int s;
	int nxt;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			x = i * j;
			if (x < 10)
			{
				_putchar(x + 48);
			}
			else if (x < 100)
			{
				_putchar((int) (x / 10) + 48);
				_putchar(x % 10 + 48);
			}
			else
			{
				ld = (int) (x / 100);
				s = (int) (x / 10) - (ld * 10);
				_putchar(ld + 48);
				_putchar(s + 48);
				_putchar((x % 10) + 48);
			}
			nxt = i * (j + 1);
			if (nxt < 10 && j != n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (nxt < 100 && j != n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (nxt < 300 && j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
