/**
 * len - Gets the lenght of a str
 * @s: pointer of a ste
 *
 * Return: len
 */
int len(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - copies a str to another one
 * @dest: Destination
 * @src: source str
 *
 * Return: address of thr destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = len(src);

	while (i < j && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
