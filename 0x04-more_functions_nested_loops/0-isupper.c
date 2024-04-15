#include "main.h"

/**
 * _isupper - checks if a char is upper case
 * @c: char
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
