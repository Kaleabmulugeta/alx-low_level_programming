#include <unistd.h>

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
