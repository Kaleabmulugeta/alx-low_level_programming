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
	char tmp;
	int leng = len(s);
	int i, j;
	char s2[leng];

	j = leng - 1;
	i = 0;
	while (i < leng)
	{
		s2[j] = s[i];
		j--;
		i++;
	}
	_puts(s2);
}
