#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _handle_specifier_2 - handles specifiers.
 * @specifier: conversion specifier.
 * @args: variable arguments list
 * Return: the number of characters printed.
 */
int _handle_specifier_2(char specifier, va_list args)
{
int count = 0;

	switch (specifier)
	{
	case 'R':
		count += _print_rot(args);
		break;
	default:
		write(1, &specifier, 1);
		count++;
		break;
	}
	return (count);
}
