/**
 * _strcpy - copies a str to another one
 * @dest: Destination
 * @src: source str
 *
 * Return: address of thr destination
 */
char *_strcpy(char *dest, char *src)
{
	char *src_p = src;
	char *dest_p = dest;

	while (*src_p != '\0')
	{
		*dest_p = *src_p;
		dest_p++;
		src_p++;
	}
	*dest_p = '\0';
	return (dest);
}
