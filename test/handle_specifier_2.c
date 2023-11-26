#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _handle_specifier_2 - handles specifiers.
 * @specifier: conversion specifier.
 * @args: variable arguments list
 * Return: the number of characters printed.
 */
int _handle_specifier_2(char spec, va_list args)
{
int count = 0;

	switch (spec)
	{
	case '+':
		count += _print_positive(args);
		break;
	case 'R':
		count += _print_rot(args);
		break;
	case '%':
		write(1, &spec, 1);
		count++;
		break;
	default:
		write(1, &spec, 1);
		count++;
		break;
	}
	return (count);
}
