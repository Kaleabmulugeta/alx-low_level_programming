#include <stdlib.h>

/**
 * array_range- Create an array containing all numbers from min to max
 * @min: The minimum number
 * @max: The maximum number
 * Return: Pointer to the address of the array
 */
int *array_range(int min, int max)
{
	int *ret;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ret = malloc(size * sizeof(int));
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ret[i] = min;
		min++;
	}
	return (ret);
}
