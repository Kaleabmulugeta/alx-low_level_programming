/**
 * _strncpy - copies n-bytes from a string to another
 * @dest: Destination
 * @src: source str
 * @n: The number of bytes to copy
 *
 * Return: address of thr destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			dest[i] = 0;
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
