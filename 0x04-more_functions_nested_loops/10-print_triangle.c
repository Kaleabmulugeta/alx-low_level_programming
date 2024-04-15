#include "main.h"

/**
 * print_chr - prints a char n times
 * @c: char
 * @n: number of times
 *
 * Return: void
 */
void print_chr(char c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
}
/**
 * print_triangle - check the code
 * @size: int
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		print_chr(' ', size - i - 1);
		print_chr('#', i + 1);
		_putchar('\n');
	}
}
