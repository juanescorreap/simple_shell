#include "shell.h"

/**
 * _free_variables - Function to free variables
 * @divided_path: First variable
 * @divided_list: Second variable
 * @route: Third variable
 * Return: void
 */
void _free_variables(char **divided_path, char **divided_list, char *route)
{
	free(divided_path[0]);
	free(divided_path);
	free(divided_list[0]);
	free(divided_list);
	free(route);
}

/**
 * _free_one_string - Free a variable
 * @divided_list: Variable to be freed
 * @buffer: Second variable to be freed
 * Return: void
 */
void _free_one_string(char **divided_list, char *buffer)
{
	free(buffer);
	free(divided_list[0]);
	free(divided_list);
}
