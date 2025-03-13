#include "main.h"
/**
 * _exp- Powers of 10
 * @n: The exponent
 *
 * Return: The output of 10 ^ n
 */
unsigned int _exp(int n)
{
	unsigned int l = 1;
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
		cp1 = (unsigned int)n * -1U;
	}
	else
	{
		cp1 = n;
	}
	cp2 = cp1;
	while (cp1 != 0)
	{
		len++;
		cp1 /= 10;
	}
	for (i = 0; i < len; i++)
	{
		dig = ((unsigned int)(cp2 / _exp(len - 1 - i))) % 10;
		_putchar(dig + '0');
	}
}
