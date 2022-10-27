#include "shell.h"
/**
 * _prompt - Function that prints a prompt, waits
 * for a commnad and reads it form the stream
 * @buffer: String that store characters typed
 * @buffersize: The size of the buffer
 * Return: The caracters readed, or -1 if fails
 */
int _prompt(char **buffer, size_t *buffersize)
{
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", _strlen("$ "));
	}
		return (getline(buffer, buffersize, stdin));
}
