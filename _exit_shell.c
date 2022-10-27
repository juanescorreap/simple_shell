#include "shell.h"
/**
 * _exit_shell - Program that exits the calling program
 * @av: Arguments
 * @line: The current line
 * Return: The status
 */
/*int _exit_shell(char **list)*/
int _exit_shell(char **av, int line)
{
	if (av[1])
	{
		d_printf(STDERR_FILENO, "./hsh: %d: exit: Illegal number: %s\n", line,
		av[1]);
	}
	return (0);
}
