#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer.
 * @n: integer
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -1 * n;
	ld = n % 10;
	_putchar(ld + 48);
	return (ld);
}
