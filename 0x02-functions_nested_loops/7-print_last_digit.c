#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer.
 * @n: integer
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;
	int ld = n % 10;

	_putchar(ld + 48);
	return (ld);
}
