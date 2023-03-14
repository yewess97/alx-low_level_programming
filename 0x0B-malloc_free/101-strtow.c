#include <stdlib.h>
#include "main.h"

/**
 * word_len - Locates the index marking the end of the first word
 * contained within a string.
 * @str: The string that to be searched
 * Return: The index marking the end of the initial word
 * to which is pointed by str
 **/
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		i++;
		len++;
	}

	return (len);
}

/**
 * count_words - Counts the number of the words
 * that are contained within a string.
 * @str: The string that to be searched
 * Return: The number of the words
 * that are contained within a string
 **/
int count_words(char *str)
{
	int i, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}

	return (words);
}

/**
 * strtow - a C program that splits a string into words.
 * @str: The string that to be splitted
 * Return: NULL if str == NULL or str == "" of the function fails,
 * otherwise, a pointer to an array of strings (words)
 **/
char **strtow(char *str)
{
	int i = 0, words, w, letters, l;
	char **strings;

	if (str == NULL || str == '\0')
		return (NULL);

	words = count_words(str);

	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words++));

	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		strings[w] = malloc(sizeof(char) * (letters++));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
