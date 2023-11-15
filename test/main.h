#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _handle_specifier(char specifier, va_list args);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_integer(va_list args);
#endif
