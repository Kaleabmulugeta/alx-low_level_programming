#include "main.h"

/**
 * print_number - Prints a number with proper formatting.
 * @num: The number to print.
 */
void print_number(int num)
{
	int dig;

	if (num > 99)
		_putchar((num / 100) + '0');
	if (num > 9)
	{
		dig = (num / 10) % 10;
		_putchar(dig + '0');
	}
	_putchar((num % 10) + '0');
}

/**
 * print_separator - Prints separators between numbers.
 * @num: The next number in the table.
 * @inc: The increment value.
 */
void print_separator(int num, int inc)
{
	_putchar(',');
	_putchar(' ');
	if ((num + inc) < 10)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if ((num + inc) < 100)
		_putchar(' ');
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number defining the table size (0 ≤ n ≤ 15).
 */
void print_times_table(int n)
{
	int inc = 0, i, j, num;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		num = 0;
		for (j = 0; j <= n; j++)
		{
			print_number(num);
			if (j != n)
				print_separator(num, inc);
			num += inc;
		}
		_putchar('\n');
		inc++;
	}
}

