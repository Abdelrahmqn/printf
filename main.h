#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _print_positive(va_list args);
int _handle_specifier(char specifier, va_list args);
int _handle_specifier_2(char spec, va_list args);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_integer(va_list args);
int _print_decimal(va_list args);
int _print_numbers(int number);
int _print_binary(int number);
int _print_in_binary(va_list args);
int _print_b10(va_list args);
int _print_octal_nums(va_list args);
int _print_rev_str(va_list args);
char _print_rot(va_list args);
#endif
