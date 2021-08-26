#include "shell.h"

/**
 * _execution - execute a program
 * @route: route of the program
 * @argv: arguments fot the program
 * Return: void
 */
int _execution(char *route, char **argv)
{
	pid_t p_child;
	int stored = 0;

	p_child = fork();
	if (p_child != 0)
		wait(&stored);
	else
	{
		if (execve(route, argv, environ) == EOF)
		{
			perror("Error");
		}
		exit(errno);
	}
	return (WEXITSTATUS(stored));
}

/**
 * _execution_path - execurte the functions with path
 * @buffer: string with the path of the program
 * Return: void
 */
int _execution_path(char *buffer)
{
	pid_t p_child;
	int stored = 0;
	char **divided_list = NULL;

	divided_list = _split(buffer, " \n");
	p_child = fork();
	if (p_child != 0)
		wait(&stored);
	else
	{
		if (execve(divided_list[0], divided_list, environ) == EOF)
		{
			perror("Error");
		}
		exit(errno);
	}
	free(divided_list[0]);
	free(divided_list);
	return (WEXITSTATUS(stored));
}
