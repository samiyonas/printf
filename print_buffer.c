#include "main.h"

/**
 * print_buffer - prints the buffer
 * @buffer: where we put our characters
 * @format_index: index of the characters
 * Return: int
 */
int print_buffer(char buffer[], int *format_index)
{
	buffer[(*format_index)++] = '\0';

	write(1, buffer, *format_index);

	return (*format_index);
}
