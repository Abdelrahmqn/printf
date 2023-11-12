#inlucde "main.h"
/**
 * _print_char - function that print characters.
 * Return: the value of function.
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * _print_str - function that prints str.
 * Return: the value of the function.
 */
int _print_str(va_list args)
{
	int count = 0;
	char str = va_arg(args, int);

	while (*str)
	{
	_putchar(*str);
	count++
		str++
	}
	return (count);
}
