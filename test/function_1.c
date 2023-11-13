#include "main.h"
#include <stdarg.h>
#include <unistd.h>
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
/**
 * _print_str - function that prints str.
 * @args: unlimited input.
 * Return: the value of the function.
 */
int _print_str(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
	write(1, str, 1);
	count++;
		str++;
	}
	return (count);
}
