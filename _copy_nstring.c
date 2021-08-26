#include "shell.h"

/**
 * _copy_nstring - Function that copy and concatenates strings
 * @n: the strings number
 * Return: A pointer to the new string concatened
 */
char *_copy_nstring(size_t n, ...)
{
	char buffer[1024];
	int i = 0;
	char *string = NULL;
	va_list ap;

	va_start(ap, n);

	for (; n > 0; n--)
	{
		string = va_arg(ap, char *);
		while (*string)
		{
			buffer[i++] = *string++;
		}
	}
	buffer[i] = '\0';
	string = malloc(_strlen(buffer) + 1);
	if (string == NULL)
		return (NULL);
	string[0] = '\0';
	_strncat(string, buffer);
	va_end(ap);
	return (string);
}
