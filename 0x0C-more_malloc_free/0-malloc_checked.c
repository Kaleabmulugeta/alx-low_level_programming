#include <stdlib.h>

/**
 * malloc_checked- Allocates memory or terminates the program
 * @b: Size in bytes
 *
 * Return: A void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
