#include <stdlib.h>

/**
 * _calloc- Allocate a chunk of memory to store n members of size 'size' each
 * @nmemb: Number of members
 * @size: Size of each member
 * Return: Memory location to store the members initialized to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ret[i] = 0;
	return (ret);
}
