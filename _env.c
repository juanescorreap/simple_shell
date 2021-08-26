#include "shell.h"
/**
 * _env - Displays the file containing all global variables
 * @av: The arguments
 * @line: The line
 * Return: Always 0 Success
 */
int _env(char **av, int line)
{
	int i = 0;
	(void)av;
	(void)line;

	while (environ[i])
	{
		d_printf(STDOUT_FILENO, "%s\n", environ[i]);
		i++;
	}
	return (0);
}
