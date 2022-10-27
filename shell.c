#include "shell.h"

/**
 * main - Program that reads a command and executes it
 * @ac: Number of arguments
 * @av: Arguments
 * Return: If successful 0, otherwise -1.
 */
int main(int ac, char **av)
{
	size_t buffersize = 0;
	int sts = 0, l = 1, read_chars = 0, stored = 0, (*pointerf)(char **av, int l);
	char *buffer = NULL, *route = NULL;
	char **divided_list = NULL, **divided_path = NULL, *direction_path_1 = NULL;
	(void)ac;

	while (1)
	{
		read_chars = _prompt(&buffer, &buffersize);
		if (read_chars == -1)
			break;
		if (!only_char(buffer, ' ', '\n'))
		{
			if (only_char(buffer, ' ', '/') || only_char(buffer, ' ', '.'))
				stored = _verificator_path(av, l, buffer);
			else
			{
				divided_list = _split(buffer, " \n");
				pointerf = _get_built_in(divided_list, sts);
				if (pointerf == NULL)
				{
					direction_path_1 = _not_built_in("PATH");
					divided_path = _split(direction_path_1, ":");
					route = _search_commands(divided_path, divided_list);
					stored = _verificator_route(route, l, divided_list);
					_free_variables(divided_path, divided_list, route);
				}
				else
				{
					if (stored == 0)
					{
						stored = pointerf(av, l);
					}
					_free_one_string(divided_list, buffer);
					return (stored);
				}
			}
		} l++;
	} free(buffer);
	return (stored);
}
