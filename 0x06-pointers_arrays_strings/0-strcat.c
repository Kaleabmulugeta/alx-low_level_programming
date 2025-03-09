#include <stdio.h>

/**
 * len- Returns length of a string
 * @str: The pointer to the string
 * Return: length of the string
 */
int len(char *str)
{
	char *cp = str;
	int leng = 0;

	while (*cp != 0)
	{
		leng++;
		cp++;
	}

	return (leng);
}

/**
 * _strcat- Concatenates two strings
 * @dest: The destinatiion string
 * @src: The source string
 * Return: Pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = len(dest);
	int len2 = len(src);

	for (i = len1; i <= len1 + len2; i++)
	{
		dest[i] = src[i - len1];
	}
	return (dest);
}

