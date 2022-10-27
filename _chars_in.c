#include "shell.h"

/**
 * _chars_in - Verifies spaces until a character comes up
 * @string: Characters typed in the buffer
 * @space: Tha space caracter
 * @until: An specific caracter
 * Return: Always 0 Success
 */
int _chars_in(char *string, char space, char until)
{
	if (string == NULL || *string == until)
		return (0);
	if (*string == space)
		return (1 + _chars_in(string + 1, space, until));
	return (0);
}
