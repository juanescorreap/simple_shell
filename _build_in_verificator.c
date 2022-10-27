#include "shell.h"

/**
 * _get_built_in - Function converts numbers to char.
 * @arguments: The list arguments
 * @sts: the status
 * Return: The path
 */
/*int (*_get_built_in(char **arguments, int sts))(char **list)*/
int (*_get_built_in(char **arguments, int sts))(char **av, int line)
{
	built_c_t array[] = {
		{"exit", _exit_shell},
		{"env", _env},
		{NULL, NULL}};
	int x = 0;
	(void)sts;


	while (array[x].command != NULL)
	{
		if (_strcmp(arguments[0], array[x].command) == 0)
		{
			return (*array[x].program);
		}
		x++;
	}
	return (NULL);
}

/**
* _not_built_in - Searches and return the direction path
* @string_path: pinter to string_paths with the direction
* Return: the direction path
*/
char *_not_built_in(char *string_path)
{
	int i, j;
	char *direction_path = NULL;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; string_path[j] == environ[i][j]; j++)
		{
		}
		if (string_path[j] == '\0' && environ[i][j] == '=')
		{
			direction_path = &environ[i][j + 1];
		}
	}
	return (direction_path);
}
