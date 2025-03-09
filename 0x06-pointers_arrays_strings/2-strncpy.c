int len(char *s)
{
	char *cp = s;
	int leng = 0;

	while (*cp != 0)
	{
		leng++;
		cp++;
	}
	return (leng);
}

/**
 * _strncpy - copies n-bytes from a string to another
 * @dest: Destination
 * @src: source str
 * @n: The number of bytes to copy
 *
 * Return: address of the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int leng = len(src);
	int i = 0;
	int idx = 0;

	while (i < n)
	{
		dest[i] = src[idx];
		if (i < leng)
			idx++;
		i++;
	}
	return (dest);
}
