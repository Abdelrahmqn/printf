#include "main.h"
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
	if (format == '%')
		{
		switch (*format)
		{
		case 'c':
			count += _print_char(args);
			break;
		case 's':
			count += _print_str(args);
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			_putchar('%');
			_putchar(*format);
			count += 2;
			break;
		}
		}
	else
	{
		_putchar(*format);
		count++;
	}
	format++;
	}
	va_end(args);
	return (count);
}
