#include "shell.h"
/**
 * _split - Funtion that takes an string and splists it
 * into multple strings.
 * @delimit: Is the delimitir used by the strtok function
 * @buffer: String that store characters typed
 * Return: Pointer to an array of pointers cotaining
 * the command's arguments.
 */
char **_split(char *buffer, char *delimit)
{
	int i = 0, count = 0;
	char **list = NULL;
	char *copy_buffer = NULL;

	count = _chars_in(buffer, ' ', '\n');
	copy_buffer = _strdup(buffer + count);
	list = malloc(1024);

	list[0] = strtok(copy_buffer, delimit);
	while (list[i])
	{
		i++;
		list[i] = strtok(NULL, delimit);
	}
	return (list);
}
