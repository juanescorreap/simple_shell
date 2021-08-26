#include "shell.h"
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * reverse - Function that reverses a string
 * @str: String to be reversed
 * @len: The size of the string
 * Return: Void
 */
void reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;

	if (str[i] == '-')
		i++;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

/**
 * int_to_str - Function that converts ints to char
 * @x: int to be converted
 * @str: String that holds the result
 * Return: Void
 */
int int_to_str(int x, char str[])
{
	int i = 0;

	if (x == INT_MIN)
	{
		str[0] = '0';
		str[1] = '2';
		str[2] = '1';
		str[3] = '4';
		str[4] = '7';
		str[5] = '4';
		str[6] = '8';
		str[7] = '3';
		str[8] = '6';
		str[9] = '4';
		str[10] = '8';
		str[11] = '\0';
		return (11);
	}
	if (x < 0)
	{
		x = (x * -1);
		str[i] = '-';
		i++;
	}
	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}
	reverse(str, i);
	str[i] = '\0';
	if (i == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	return (i);
}

/**
 * d_printf - Function that prints to a file descriptor
 * @fd: File descriptor
 * @format: String that holds the format to be applied
 * Return: Int
 */
int d_printf(int fd, const char *format, ...)
{
	char str_to_print[1024],
	number_toprint[24];
	char *str = NULL, *buff = NULL;
	int number = 0;
	va_list args;

	va_start(args, format);
	buff = str_to_print;
	while (*format)
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				for (str = va_arg(args, char *); *str;)
					*buff++ = *str++;
			else if (*format == 'd' || *format == 'i')
			{
				number = va_arg(args, int);
				int_to_str(number, number_toprint);
				for (str = number_toprint; *str;)
					*buff++ = *str++;
			}
			format++;
		}
		else
			*buff++ = *format++;
	*buff = '\0';
	va_end(args);
	write(fd, str_to_print, buff - (char *)str_to_print);
	return (buff - (char *)str_to_print);
}
