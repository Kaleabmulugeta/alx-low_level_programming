#include <stdlib.h>

/**
 * copy_data- Copy data from src to dest
 * @src: Pointer to src address
 * @dest: Destination address
 * @n: Number of bytes to copy
 * Return: Void
 */
void copy_data(char *src, char *dest, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
}
/**
 * min- Find the smaller number
 * @n1: First num
 * @n2: Second num
 * Return: Smaller num
 */
unsigned int min(unsigned int n1, unsigned int n2)
{
	unsigned int ret = (n1 < n2) ? (n1) : (n2);

	return (ret);
}
/**
 * _realloc- Reallocate chunk of memory
 * @ptr: Original address
 * @old_size: Size of old memory space
 * @new_size: The new required size
 * Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ret;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ret = malloc(new_size);
		return ((ret == NULL) ? (NULL) : (ret));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ret = malloc(new_size);
	if (ret == NULL)
		return (NULL);
	if (new_size > old_size)
		copy_data(ptr, ret, old_size);
	else
		copy_data(ptr, ret, min(old_size, new_size));
	free(ptr);
	return (ret);
}
