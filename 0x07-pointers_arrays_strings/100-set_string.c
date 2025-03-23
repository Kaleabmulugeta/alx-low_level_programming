/**
 * set_string- Changes the value stored in one string to another
 * @s: A pointer to another pointer pointing to the original string
 * @to: The value we want to change the original to
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
