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
 * _print_rot - Applies a string and prints the transformed chars
 * @args: Argument containing the string to be transformed.
 * Return: The count of characters printed or -1 if fails.
 */

char _print_rot(va_list args)
{
	char *str = va_arg(args, char*);
	char c;
	int i;
	int counter = 0;

	if (str)
	{
		while (*str != '\0')
		{
			c = *str;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	for (i = 0; i < 13; i++)
		{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			c++;
		}
		else if (c == 'z')
		{
			c = 'a';
		}
		else if (c == 'Z')
		{
			c = 'A';
		}
		}
	}
	write(1, &c, 1);
	counter++;
	str++;
		}
	}
	return (counter);
}
