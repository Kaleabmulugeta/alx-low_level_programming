#include "main.h"
#include <stdio.h>

/**
 * len - Returns the length of a str
 * @s: Pointer to the str
 *
 * Return: length
 */
int len(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * rev_string - reverses a string
 * @s: Pointer to the str
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i, j;

	i = 0;
	j = len(s) - 1;
	while (i <= j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
