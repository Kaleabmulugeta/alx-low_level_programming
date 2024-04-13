#include "main.h"
/**
 * print_to_98 - print form n to 98
 *@n: integer
 *
 * print_int - prints any integer
 * @x: integer
 *
 * Return: void
 */
void print_int(int x)
{
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
		_putchar((int) (x / 100) + 48);
		print_int(x - ((int) (x / 100)) * 100);
		return;
	}
}
void print_to_98(int n)
{
	if (n <= 98)
	{
		while(n <= 98)
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
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('\n');
}
	
