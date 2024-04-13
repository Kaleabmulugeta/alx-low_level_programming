#include "main.h"

/**
 * print_int - print an int
 * @x: int
 *
 * Return: void
 */
void print_int(int x)
{
	int ld;
	int s;

	if (x < 0)
	{
		_putchar('-');
		print_int(-1 * x);
		return;
	}
	if (x < 10)
	{
		_putchar(x + 48);
		return;
	}
	else if (x < 100)
	{
		_putchar((int) (x / 10) + 48);
		_putchar((x % 10) + 48);
		return;
	}
	else if (x < 1000)
	{
		ld = (int) (x / 100);
		s = (int) (x / 10) - (ld * 10);
		_putchar(ld + 48);
		_putchar(s + 48);
		_putchar((x % 10) + 48);
		return;
	}
}
/**
 * print_to_98 - check the code
 * @n: int
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print_int(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			print_int(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}

