#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct prints
{
	char c;
	int (*function_print)(va_list)
};

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args)

#endif
