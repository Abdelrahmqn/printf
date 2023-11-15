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
 * _print_numbers - helper function for %d %i
 * @the_num: the number to print.
 * Return: the number of characters printed.
 */
int _print_numbers(int number)
{
	int count = 0;
	unsigned int temp_num = number;
	char integers;
	if (number < 0)
	{
		write(1, "-", 1);
		temp_num = temp_num * -1;
	count++;
	}
	if (temp_num / 10)
		count += _print_numbers(temp_num / 10);
	integers = (temp_num % 10) + '0';
	write(1, &integers, 1);
	count++;
	return (count);
}
/**
 * _print_integer - function that prints an integer.
 * @args: input arguments.
 * Return: return the value.
 */
int _print_integer(va_list args)
{
	int v_number1 = 0;
	int number = va_arg(args, int);
	
	v_number1 += _print_numbers(number);

	return (v_number1);
}
/**
 * _print_decimal - function that prints an integer.
 * @args: input arguments.
 * Return: return the value.
 */
int _print_decimal(va_list args)
{
	int number;
	int v_number = 0;

	number = va_arg(args, int);
	v_number += _print_numbers(number);
	return (v_number);
}
