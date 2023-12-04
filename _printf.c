#include "main.h"

/**
 * _printf - replica of standard library function printf
 * @format: format string
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, index = 0, counter;
	char buffer[BUFFSIZE];

	va_list args;

	va_start(args, format);

	if (format)
	{
		i = 0;
		while (format[i] != '\0')
		{
			if (format[i] != '%')
			{
				buffer[index++] = format[i];
			}
			else
			{
				handle_char(buffer, &index, args);
				handle_str(buffer, &index, args);
				handle_percent(buffer, &index, args);
				counter = print_buffer(buffer, &index);
			}
			i++;
		}
	}
	va_end(args);
	return (counter);
}
