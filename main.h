#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFSIZE 1024

int print_buffer(char buffer[], int *format_index);
int _printf(const char *format, ...);
int handle_char(char buffer[], int *format_index, va_list ptr);
int handle_str(char buffer[], int *format_index, va_list ptr);
int handle_percent(char buffer[], int *format_index, va_list ptr);

#endif
