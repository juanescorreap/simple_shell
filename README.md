#  Simple Shell


## Description

This project is a simple implementation of the command line interprter for UNIX systems known as Bourne shell (sh).It was developed as part of the foundations program at Holberton School and its purpose to help the students consolidate their knowledge regarding the C programming language. 

The command line interpreter was designed to handle and process commands to a computer program in the form of lines of text.


## Getting Started

* Make sure all the source code files are available
* Compile using gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
* On interactive mode commands are given from the terminal
* On non-interactive mode commands are given from an automated process


## Functions

|  Function Name |         Description         |
|----------------|----------------------------------------------|
|`_prompt`|Function that prints a prompt, waits for a commnad and reads it form the stream.|                 |
|`_split`|Function that takes a string and slpits it into multiple strings and returns a pointer to the containing array.|
|`_get_built_in`|Function that selects the built-in function to be used by comparing the command given with an array of structures and returnin a function pointer.|
|`_not_built_in`|Function that searches for the $PATH variable on the environment and retunrs a pointer to it's first position.|
|`_search_commands`|Function that searches for a command on the different routes on $PATH and returns a copy of the route where it's found.|
|`_execution_path`|Function that takes the full path to a command, the command, and the arguments on a sigle string and executes them. Returns an status indicating wether it was successful or not.|
|`_execution`|Function that thakes the full path to a command and its arguments on a string and an array of strings respectively and executes them. Returns an status indicating wether it was successful or not.|
|`_strlen`|Funtion that takes a string and returns its length.|
|`_strcmp`|Funtion that takes two strings compares them and returns the number of different characters.|
|`_strncat`|Function that concatenates two strings it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes. Returns a pointer to the concatenated string. 
|`_strdup`|Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.|
|`_copy_nstring`|Funtction that concatenates any number given strings. Returns a pointer a to a allocated space in memory, which cointains the concatenated string.|
|`_verificator_path`|Function that checks if a program exists in a given path, and if it does, checks that if it's readeable and executable.|
|`_verificator_route`|Function that checks if a program exists in a given path, and if it does, checks that if it's readeable and executable.|
|`d_printf`|Function that prints formated output in the specified file.|
|`only_char`|Funtion that moves along a string as long as the second parameter is repeated and up to the third parameter.|
|`_chars_in`|Function that moves along a string as long as the second parameter is repeated and up to the third parameter.|
|`_free_variables`|Function that frees arrays used to hold information needed for the execution of the program.|
|`_free_one_string`|Function that frees arrays used to hold information needed for the execution of the program.|
|`_exit_shell`|Shell Built-function that exits the program and returns an status.|
|`_env`|Shell Built-function that prints the environment variables.|

## Flowchart

![printf](https://raw.githubusercontent.com/juanescorreap/simple_shell/master/simple_shell_flowchart.png)

## Special Thanks

This program was written as part of the curriculum for Holberton School. Holberton School is a campus-based full-stack software engineering program that prepares students for careers in the tech industry using project-based peer learning. For more information, visit [this link](https://www.holbertonschool.com/).
<p align="center">
  <img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School logo">
</p>

## Authors
- [Cristian Oliveros](https://github.com/Cr1st14n0l101)
- [Juan Esteban Correa Pérez](https://github.com/juanescorreap)