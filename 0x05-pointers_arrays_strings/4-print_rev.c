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
 * print_rev - prints a string in rev order
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int leng = len(s);
	int j;

	j = leng - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
