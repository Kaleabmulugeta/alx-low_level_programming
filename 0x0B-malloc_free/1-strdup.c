#include <stdlib.h>

/**
 * _strdup- Creates a copy of a string in the heap
 * @str: String to be copied
 *
 * Return: Pointer to copy or NULL on error
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *cp = str;
	char *ret;

	while (*cp != 0)
	{
		len++;
		cp++;
	}
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ret[i] = str[i];
	return (ret);
}
