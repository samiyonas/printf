#include "main.h"

/**
 * handle_char - handles characters
 * @buffer: where we put the char
 * @format_index: index of the char
 * @ptr: the pointer to arguments
 * Return: int
 */
int handle_char(char buffer[], int *format_index, va_list ptr)
{
	char c;

	c = va_arg(ptr, int);

	buffer[(*format_index)++] = c;

	return (*format_index);
}

/**
 * handle_str - handles strings
 * @buffer: where we put the strings
 * @format_index: index of the str
 * @ptr: the pointer to arguments
 * Return: int
 */
int handle_str(char buffer[], int *format_index, va_list ptr)
{
	char *str;
	int i;

	str = va_arg(ptr, char *);

	if (str == NULL)
	{
		return (*format_index);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		buffer[(*format_index)++] = str[i];
	}

	return (*format_index);
}

/**
 * handle_percent - handles percent
 * @buffer: where we put the percent
 * @format_index: - index of the percent
 * @ptr: the pointer to arguments
 * Return: int
 */
int handle_percent(char buffer[], int *format_index, va_list ptr)
{
	char c;

	c = va_arg(ptr, int);

	buffer[(*format_index)++] = c;

	return (*format_index);
}
