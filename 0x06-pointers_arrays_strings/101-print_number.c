#include "main.h"

/**
 * _exp- Powers of 10
 * @n: The exponent
 *
 * Return: The output of 10 ^ n
 */
int _exp(int n)
{
	int l = 1;
	int i;

	for (i = 0; i < n; i++)
		l *= 10;
	return (l);
}

/**
 * print_number- prints a number to stdout
 * @n: The number
 *
 * Return: void
 */
void print_number(int n)
{
	int i;
	int dig;
	int len = 0;
	unsigned int cp1;
	unsigned int cp2;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		cp1 = -1 * n;
		cp2 = -1 * n;
	}
	else
	{
		cp1 = n;
		cp2 = n;
	}
	while (cp1 != 0)
	{
		len++;
		cp1 /= 10;
	}
	for (i = 0; i < len; i++)
	{
		dig = ((int)(cp2 / _exp(len - 1 - i))) % 10;
		_putchar(dig + '0');
	}
}
