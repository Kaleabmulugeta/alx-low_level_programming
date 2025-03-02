#include "main.h"

int _pow(int n, int exp)
{
	int i;
	int n2 = n;
	for (i = 1; i < exp; i++)
	{
		n *= n2;
	}
	return n;
}

void print_number(int n)
{
	int i;
	int len = 0;
	int n2;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	n2 = n;
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	for (i = 1; i <= len; i++)
	{
		if (i != len)
		{
			_putchar((int) ((n2 / _pow(10, (len - i))) % 10) + '0');
		}
		else
			_putchar((n2 % 10) + '0');
	}
}
