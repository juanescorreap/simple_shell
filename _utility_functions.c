#include "shell.h"

/**
 * _strcmp - Function that compares two strings.
 * Return: Integer indicating if the first string is
 * less than, equal to or greater than the second string.
 * @s1: Reference string.
 * @s2: String to be compared.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: pointer to the string duplicated
 */
char *_strdup(char *str)
{
	int i, j;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	dest = malloc((i * sizeof(str[0])) + 1);
	if (dest == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dest[j] = str[j];

	return (dest);
}


/**
 * _strlen -  Function that returns the length of a string.
 * Return: Lenght of the string.
 * @s: String to whose length is to be computed.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strncat - Function that concatenates two strings
 * it will use at most n bytes from src; and src does
 * not need to be null-terminated if it contains n or more bytes.
 * Return: Pointer of type char.
 * @dest: First string to be concatenated.
 * @src: String to be appended.
 */
char *_strncat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * function_free - function for free memory
 * @array_strings: pointer to be freed
 * Return: void
 */
void function_free(char **array_strings)
{
	int i = 0;

	while (array_strings[i])
	{
		free(array_strings[i]);
		i++;
	}
	free(array_strings);
}
