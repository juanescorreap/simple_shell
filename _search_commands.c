#include "shell.h"
/**
 * _search_commands - Searches for a command on the path
 * @divided_environ: the environment with the strings divided
 * @divided_arguments: the arguments list dividad
 * Return: Always 0 on success, or -1 is not successful
 */
char *_search_commands(char **divided_environ, char **divided_arguments)
{
	int i = 0;
	struct stat status;
	char **cpy_string = divided_environ;
	char *current_copy = NULL;

	while (cpy_string[i])
	{
		current_copy = _copy_nstring(3, cpy_string[i], "/", divided_arguments[0]);
		if (stat(current_copy, &status) == 0)
			return (current_copy);
		i++;
		free(current_copy);
	}
	return (NULL);
}
