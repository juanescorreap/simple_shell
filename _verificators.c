#include "shell.h"

/**
 * _verificator_path -  verify if the file direction exists
 * and if can be readed and executed
 * @av: the arguments
 * @line: the current line in the shell
 * @buffer: the buffer that store de information from input
 * Return: void
 */
int _verificator_path(char **av, int line, char *buffer)
{
	struct stat status;
	int stored = 0;

	if (stat(av[0], &status) == 0)
	{
		if (access(av[0], R_OK) == -1 || access(av[0], X_OK) == -1)
		{
			d_printf(STDERR_FILENO, "%s: %d: %s: Permission denied\n",
			av[0], line, av[0]);
			stored = 126;
		}
		else
			stored = _execution_path(buffer);
	}
	else
	{
		d_printf(STDERR_FILENO, "%s: %d: %s: not found\n",
		av[0], line, av[0]);
		stored = 127;
	}
	return (stored);
}

/**
 * _verificator_route - verify if the file route
 * exists and if can be readed and executed
 * @route: The route of the file
 * @line: the current line in the shell
 * @divided_list: the arguments divided
 * Return: int.
 */
int  _verificator_route(char *route, int line, char **divided_list)
{
	struct stat status;
	int stored = 0;

	if (stat(route, &status) == 0)
	{
		if (access(route, R_OK) == -1 || access(route, X_OK) == -1)
		{
			d_printf(STDERR_FILENO, "./hsh: %d: %s: Permission denied\n",
			line, divided_list[0]);
			stored = 126;
		}
		else
			stored = _execution(route, divided_list);
	}
	else
	{
		d_printf(STDERR_FILENO, "./hsh: %d: %s: not found\n",
		line, divided_list[0]);
		stored = 127;
	}
	return (stored);
}
