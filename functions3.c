#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _print_char - function that print characters.
 * @args: unlimited input.
 * Return: the value of function.
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
