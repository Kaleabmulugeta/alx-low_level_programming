#include <unistd.h>

/**
 * _putchar - puts a char on the console
 * @s: the char
 *
 * Return: void
 */
void _putchar(char s)
{
	write(1, &s, 1);
}
