#include <stdlib.h>
#include <stdio.h>

/**
 * arr_free- Frees an arr allocated by a co-function below
 * @arr: Array
 * @i: Stop index
 *
 * Return: void
 */
void arr_free(char **arr, int i)
{
	int j;

	for (j = 0; j < i; j++)
		free(arr[j]);
	free(arr);
}
/**
 * find_next- Finds the index of the next non space char
 * @str: Pointer to parent string
 * @idx: Search start position
 *
 * Return: Length
 */
int find_next(char *str, int idx)
{
	int i;

	for (i = idx; str[i] != 0; i++)
	{
		if (str[i] != ' ')
			return (i);
	}
	return (-1);
}
/**
 * count_words- Counts words in a string
 * @cp: The string
 *
 * Return: Number of words
 */
int count_words(char *cp)
{
	int words = 0, in_word = 0;

	while (*cp != 0)
	{
		if (*cp != ' ')
			in_word = 1;
		if (in_word && *cp == ' ')
		{
			in_word = 0;
			words++;
		}
		cp++;
	}
	if (in_word && *cp == 0)
		words++;
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
	int words = count_words(str);
	int i, j, idx = 0, sub_len = 0, cp;
	char **arr;
	char *word;

	if (str == NULL || str[0] == 0)
		return (NULL);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		idx = find_next(str, idx);
		if (idx == -1)
			break;
		cp = idx;
		while (str[cp] != ' ' && str[cp] != 0)
		{
			cp++;
			sub_len++;
		}
		cp = 0;
		word = (char *)malloc((sub_len + 1) * sizeof(char));
		if (word == NULL)
			arr_free(arr, i);
		for (j = idx; j < sub_len + idx; j++)
		{
			word[cp] = str[j];
			cp++;
		}
		idx += sub_len;
		word[sub_len] = 0;
		arr[i] = word;
		sub_len = 0;
	}
	arr[words] = NULL;
	return (arr);
}
