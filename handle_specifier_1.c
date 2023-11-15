#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _handle_specifier - function that handle my specifier.
 * @specifier: used for switch cases.
 * @args: input argument.
 */
void _handle_specifier(char specifier, va_list args)
{
	int count = 0;

	switch (specifier)
	{
	case 'c':
		count = count + _print_char(args);
		break;
	case 's':
		count = count + _print_str(args);
		break;
	case 'd':
		count += _print_integer(args);
		break;
	case '%':
		write(1, &specifier, 1);
		count++;
		break;
	default:
		write(1, &specifier, 1);
		count++;
		break;
	}
}
