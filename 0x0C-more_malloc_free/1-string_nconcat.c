#include <stdlib.h>

/**
 * len- Compute length of a string
 * @str: String
 * Return: The length
 */
int len(char *str)
{
	int length = 0;

	while (*str != 0)
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * string_nconcat- Concatenates s1 to n chars from s2
 * @s1: First string
 * @s2: Second String
 * @n: Number of chars to copy
 * Return: Newly allocated string with contents of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = (s1 != NULL) ? (len(s1)) : 0;
	unsigned int l2 = (s2 != NULL) ? (len(s2)) : 0;
	unsigned int i, idx = 0;
	char *ret;

	n = (n >= l2) ? l2 : n;
	ret = malloc((l1 + n + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		ret[idx++] = s1[i];
	for (i = 0; i < n; i++)
		ret[idx++] = s2[i];
	ret[idx] = 0;
	return (ret);
}
