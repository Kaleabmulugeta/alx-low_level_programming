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
 * _strncat- Concatenates n-bytes from a string to another
 * @dest: The destinatiion string
 * @src: The source string
 * @n: The number of bytes to copy
 * Return: Pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = len(dest);

	for (i = len1; i < len1 + n; i++)
	{
		if (src[i - len1] == 0)
			break;
		dest[i] = src[i - len1];
	}
	return (dest);
}

