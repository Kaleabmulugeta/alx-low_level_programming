#include "main.h"

/**
 * _strlen - computes the length of a string
 * @str: string
 *
 * Return: Length of the str
 */
int _strlen(char *str)
{
	int len;
	char tmp;

	len = 0;

	while ((tmp = *str) != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
