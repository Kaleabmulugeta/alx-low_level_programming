#include "main.h"

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
 * puts2 - prints every other char of a string, starting with the first
 * character, followed by a new line.
 * @s: pointer to thr str
 *
 * Return: void
 */
void puts2(char *s)
{
	int l = len(s);
	int i = 0;

	while (i < l)
	{
		_putchar(s[i]);
		i += 2;
	}
	_putchar('\n');
}
