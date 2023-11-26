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
/**
 * _print_positive - function that prints positive numbers.
 * @args: input the argument.
 * Retrurn: the value of count or the number.
 */
int _print_positive(va_list args)
{
	int value = 0;
	int num = va_arg(args, int);

	if (num >= 0)
	{
		write(1, "+",1);
	value++;
	}
	num = (num < 0) ? -num : num;
	value += _print_numbers(num);
	return (value);
}
/**
 * _print_rot - Applies a string and prints the transformed chars
 * @args: Argument containing the string to be transformed.
 * Return: The count of characters printed or -1 if fails.
 */

char _print_rot(va_list args)
{
	char *str = va_arg(args, char*);
	char c;
	int set_13;
	int counter = 0;

	if (str)
	{
		while (*str != '\0')
		{
			c = *str;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			set_13 = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			c = set_13 + ((c - set_13 + 13) % 26);
		}
	}
	write(1, &c, 1);
	counter++;
	str++;
		}
	}
	return (counter);
}
