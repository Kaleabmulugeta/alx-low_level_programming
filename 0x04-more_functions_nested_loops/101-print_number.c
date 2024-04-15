#include "main.h"

/**
 * print_number - prints a num
 * @n: int
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-1 * n);
		return;
	}
	if (n < 10)
	{
		_putchar(n + 48);
		return;
	}
	else if (n < 100)
	{
		_putchar(n / 10 + 48);
		_putchar(n % 10 + 48);
		return;
	}
	else if (n < 1000)
	{
		_putchar(n / 100 + 48);
		_putchar(((n / 10) - (n / 100) * 10) + 48);
		_putchar(n % 10 + 48);
		return;
	}
	else if (n < 10000)
	{
		_putchar(n / 1000 + 48);
		_putchar(((n / 100) - (n / 1000) * 10) + 48);
		_putchar(((n / 10) - (n / 100) * 10) + 48);
		_putchar(n % 10 + 48);
		return;
	}
	else if (n < 100000)
	{
		_putchar(n / 10000 + 48);
		_putchar(((n / 1000) - (n / 10000) * 10) + 48);
	       _putchar(((n / 100) - (n / 1000) * 10) + 48);
	       _putchar(((n / 10) - (n / 100) * 10) + 48);
	       _putchar(n % 10 + 48);
	}
}
