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
	char percent = '%';
	int count = 0, i = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
		switch (format[i])
		{
		case 'c':
			count = count + _print_char(args);
			break;
		case 's':
			count = count + _print_str(args);
			break;
		case '%':
			write(1, &percent, 1);
			count++;
			break;
		default:
			write(1, &format[i], 1);
			count++;
			break;
		}
		i++;
		}
	else
	{
	write(1, &format[i], 1);
	count++;
	i++;
	}
	}
	va_end(args);
	return (count);
}
