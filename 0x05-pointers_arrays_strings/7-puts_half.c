#include "main.h"
#include <stdio.h>

/**
 * len - computes the len of str
 * @s: pointer to thr str
 *
 * Return: The len
 */
int len(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * puts_half - prints half of a str
 * @s: Pointer to the str
 *
 * Return: void
 */
void puts_half(char *s)
{
	int l = len(s);
	int i;

	if (l % 2 == 0)
	{
		i = l / 2;
	}
	else
	{
		i = l / 2 + 1;
	}
	while (i < len(s))
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
