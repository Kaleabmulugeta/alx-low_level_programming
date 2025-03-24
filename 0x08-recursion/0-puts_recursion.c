#include "main.h"
/**
 * _puts_recursion- Recursive function that behaves like puts
 * @s: pointer to the string that has to be printed
 *
 * Return:Void
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
