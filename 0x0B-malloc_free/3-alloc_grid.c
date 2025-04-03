#include <stdlib.h>
/**
 * alloc_grid- Allocates and initializes a 2D array in the head
 * @width: Width
 * @height: Height
 *
 * Return: A pointer to pointer pointing to the first element
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int *ret;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ret = (int *)malloc(width * sizeof(int));
		if (ret == NULL)
		{
			for (k = 0; k < i; k++)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ret[j] = 0;
		arr[i] = ret;
	}
	return (arr);
}
