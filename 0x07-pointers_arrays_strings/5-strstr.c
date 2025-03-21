#define NULL ((void *)0)

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

	for (i = 0; haystack[i] != 0; i++)
	{
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
