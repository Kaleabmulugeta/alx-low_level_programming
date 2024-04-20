#include "main.h"
#include <unistd.h>

/**
 * len - Returns the lenth of a str
 * @s: Pointer to the str
 *
 * Return: int
 */
int len(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _puts - A custom equivalent for the libc puts
 * @str: pointer to the str
 *
 * Return: void
 */
void _puts(char *str)
{
	char tmp;
	char nl = '\n';

	while ((tmp = *str) != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, &nl, 1);
}

/**
 * print_rev - prints a string in rev order
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int leng = len(s);
	int i, j;
	char tmp[200];

	j = leng - 1;
	i = 0;
	while (i < j)
	{
		tmp[i] = s[j];
		j--;
		i++;
	}
	_puts(tmp);
}
