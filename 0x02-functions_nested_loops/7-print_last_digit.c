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
	ld = (n % 10);
	if (ld < 0)
		ld = -1 * ld;
	_putchar(ld + 48);
	return (ld);
}
