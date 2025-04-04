#include <stdlib.h>

/**
 * len- Calculate length of a substring that might count as a word
 * @str: Pointer to parent string
 * @start: Where to start the substring
 *
 * Return: Length
 */
int len(char *str, int start)
{
	int i, len = 0;

	for (i = start; str[i] != 0; i++)
	{
		if (str[i] == ' ')
			return (len);
		len++;
	}
	return (len);
}
/**
 * count_words- Counts words in a string
 * @cp: The string
 *
 * Return: Number of words
 */
int count_words(char *cp)
{
	int words = 0, seen = 0;

	while (*cp != 0)
	{
		if (*cp != ' ')
		{
			seen = 1;
			cp++;
			continue;
		}
		if (seen)
		{
			seen = 0;
			words++;
		}
		cp++;
	}
	return (words);
}
/**
 * strtow- Splits a string to words
 * @str: The string
 *
 * Return: Array of pointers to words in the heap
 */
char **strtow(char *str)
{
	int words, i, j, current_length, lk, idx = 0;
	char **arr;
	char *word;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = count_words(str) + 1;
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		current_length = len(str, idx);
		if (str[idx] == 0)
			break;
		if (current_length == 0)
		{
			idx++;
			i--;
			continue;
		}
		word = (char *)malloc((current_length + 1) * sizeof(char));
		if (word == NULL)
		{
			for (lk = 0; lk < i; lk++)
				free(arr[lk]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < current_length; j++)
		{
			word[j] = str[idx++];
		}
		word[current_length] = 0;
		arr[i] = word;
		idx++;
	}
	arr[words] = NULL;
	return (arr);
}
