#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _handle_specifier- handles specifiers.
 * @specifier: conversion specifier.
 * @args: variable arguments list
 * Return: the number of characters printed.
 */
int _handle_specifier(char specifier, va_list args)
{
int count = 0;

	switch (specifier)
	{
	case 'c':
		count = count + _print_char(args);
		break;
	case 's':
		count = count + _print_str(args);
		break;
	case 'd':
		count += _print_decimal(args);
		break;
	case 'i':
		count += _print_integer(args);
		break;
	case 'b':
		count += _print_in_binary(args);
		break;
	case 'u':
		count += _print_b10(args);
		break;
	case 'o':
		count += _print_octal_nums(args);
		break;
	case '%':
		write(1, &specifier, 1);
		count++;
		break;
	default:
		write(1, &specifier, 1);
		count++;
		break;
	}
	return (count);
}
