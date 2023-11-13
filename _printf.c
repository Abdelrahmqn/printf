#include "main.h"
#include <stdarg.h>
/**
 * _printf - according to format produce output.
 *
 * @format: is a character string.The format string is composed of zero
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int counting = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

		switch (*format)
		{
		case 'c':
			counting += _print_char(args);
			break;
		case 's':
			counting += _print_str(args);
			break;
		case '%':
			_putchar('%');
			counting++;
			break;
		default:
			_putchar('%');
			_putchar(*format);
			counting++;
			break;
		}
		}
	else
	{
		_putchar(*format);
		counting++;
	}
	format++;
	}
	va_end(args);
	return (counting);
}
