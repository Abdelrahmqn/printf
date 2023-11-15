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

/**
 * _print_integer - function that prints an integer.
 * @args: input arguments.
 * Return: return the value.
 */
int _print_integer(va_list args)
{
	int count = 0, integer = 0;
	char negative_sign = '-';
	int number = 1;
	int temp_numb;
	char print_the_number;

	integer = va_arg(args, int);
	if (integer < 0)
	{
		write(1, &negative_sign, 1);
	count++;
		integer = -integer;

	}
	temp_numb = integer;
	while (temp_numb / 10 != 0)
	{
		number = number * 10;
		temp_numb = temp_numb / 10;
	}
	while (number != 0)
	{
		print_the_number = '0' + integer / number;
	write(1, &print_the_number, 1);
	count++;
	integer = integer % number;
	number = number / 10;
	}
	return (count);
}
