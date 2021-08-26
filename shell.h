#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
extern char **environ;
/*task functions*/
int _prompt(char **buffer, size_t *buffersize);
char **_split(char *buffer, char *delimit);
int (*_get_built_in(char **string, int status))(char **av, int line);
char *_not_built_in(char *string);
char *_search_commands(char **divided_environ, char **divided_list);
int _execution_path(char *buffer);
int _execution(char *route, char **argv);
/*utility funcions*/
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src);
char *_strdup(char *str);
char *_copy_nstring(size_t n, ...);
int  _verificator_path(char **av, int line, char *buffer);
int  _verificator_route(char *route, int line, char **divided_list);
int d_printf(int fd, const char *format, ...);
int only_char(char *string, char character, char until);
int _chars_in(char *string, char space, char until);
void _free_variables(char **divided_path, char **divided_list, char *route);
void _free_one_string(char **divided_list, char *buffer);
/*buil-ins*/
/*int _exit_shell(char **list);*/
int _exit_shell(char **av, int line);
int _env(char **av, int line);
/**
 * struct built_in_commands - struct with elements of type
 * pointer and function pointer.
 * @command: Pointer to the first argument of the command.
 * @program: Pointer to the function that will be passed
 * to perform the command.
 */
typedef struct built_in_commands
{
char *command;
/*int (*program)(char **list);*/
int (*program)(char **av, int line);
} built_c_t;

typedef struct for_strings
{
char tmp[2048];
} string_t;
#endif
