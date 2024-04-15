#include "main.h"

/**
 * print_sp - prints dashes
 * @n: int
 *
 * Return: void
 */
void print_sp(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(' ');
}
/**
 * print_diagonal - prints a diagonal
 * @n: int
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int sp = 0;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
		return;
	}
	if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		print_sp(sp);
		_putchar('\\');
		_putchar('\n');
		sp++;
	}
	_putchar('\n');
}
