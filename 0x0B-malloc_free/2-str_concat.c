#include <stdlib.h>

/**
 * len- Compute length of a string
 * @str: The string
 *
 * Return: The length
 */
int len(char *str)
{
	int ret = 0;

	while (*str != 0)
	{
		ret++;
		str++;
	}
	return (ret);
}
/**
 * str_concat- Concatenates two strings in a newly allocated space
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i;
	char *ret;

	if (s1 != NULL)
		l1 = len(s1);
	if (s2 != NULL)
		l2 = len(s2);
	ret = (char *)malloc(l1 + l2 + 1);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		ret[i] = s1[i];
	for (i = 0; i < l2; i++)
		ret[i + l1] = s2[i];
	ret[l1 + l2] = 0;
	return (ret);
}
