#define NULL ((void *)0)
#include <stdio.h>

int len(char *b)
{
	char *cp = b;
	int len = 0;

	while (*cp != 0)
	{
		len++;
		cp++;
	}
	return (len);
}
/**
 * _strstr- Finds the needle in the haystack
 * @needle: The required substring
 * @haystack: The string to search the needle in
 *
 * Return: Pointer to the haystack in the needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	char *ret = NULL;

	if (len(needle) == 0)
		return (haystack);
	for (i = 0; haystack[i] != 0; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			ret = &(haystack[i]);
			while (haystack[i] == needle[j])
			{
				if (haystack[i] == 0)
					break;
				i++;
				j++;
			}
		}
	}
	return (ret);
}
