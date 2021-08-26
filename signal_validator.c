#include "shell.h"

/**
 * only_char - Verify spaces
 * @string: Characters typed in the buffer
 * @character: Tha space caracter
 * @until: An specific caracter
 * Return: Always 0 Success
 */
int only_char(char *string, char character, char until)
{
	if (string == NULL || *string == until)
		return (1);
	if (*string == character)
		return (only_char(string + 1, character, until));
	return (0);
}
