#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - according to format produce output.
 * @format: is a character string.The format string is composed of zero
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
			{
				if (format[i] == '+' || format[i] == 'R')
				{
				count += _handle_specifier_2(format[i], args);
				}
				else
				{
				count += _handle_specifier(format[i], args);
				}
			}
		}
	else
	{
	write(1, &format[i], 1);
	count++;
	}
	i++;
	}
	va_end(args);
	return (count);
}
