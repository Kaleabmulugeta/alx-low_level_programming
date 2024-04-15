#include "main.h"

/**
 * _isdigit - checks if a char is upper case
 * @c: int
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
