#include "main.h"

/**
 * _pow - Exponentiate a number
 * @n: the base
 * @exp: exponent
 *
 * Return: The final out put
 */
int _pow(int n, int exp)
{
	int i;
	int n2 = n;

	for (i = 1; i < exp; i++)
	{
		n *= n2;
	}
	return (n);
}
/**
 * len - Length a number
 * @n: the number
 *
 * Return: The length
 */
int len(int n)
{
	unsigned int n2;
	unsigned int len = 0;

	if (n < 0)
		n2 = n * -1;
	else
		n2 = n;
	while (n2 >= 1)
	{
		n2 /= 10;
		len++;
	}
	return (len);
}
/**
 * print_number - prints a number to stdout
 * @n: the number to be printed
 *
 * Return: Void
 */
void print_number(int n)
{
	int i;
	int leng;
	unsigned int n2;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n2 = n * -1;
	}
	else
		n2 = n;
	leng = len(n);
	for (i = 1; i <= leng; i++)
	{
		if (i != leng)
		{
			_putchar((int) ((n2 / _pow(10, (leng - i))) % 10) + '0');
		}
		else
			_putchar((n2 % 10) + '0');
	}
}
