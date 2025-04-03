#include <stdlib.h>

/**
 * create_array- Creates an array and initializes it with a char c
 * @size: Size of the array
 * @c: The char to initialize the array with
 *
 * Return: Pointer to the array or NULL on error
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
