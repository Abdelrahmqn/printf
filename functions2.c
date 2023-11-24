#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _print_binary - Helper function prints the (binary representation).
 * @number: the input number.
 * Return: the count (sum) summary of the function.
 */
int _print_binary(int number)
{
	int i = 0;
	int count = 0;
	char binary_num;
	char zero = '0';
	int reverse_digits[70];

	if (number < 0)
	return (-1);

	if (number == 0)
	{
	write(1, &zero, 1);
	return (1);
	}
	while (number > 0)
	{
	binary_num = (number % 2) + '0';
	reverse_digits[count] = binary_num;
	count++;
	number /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
	write(1, &reverse_digits[i], 1);
	}
	return (count);
}

/**
 * _print_in_binary - Prints binary representation of a number (reverse order).
 * @args: input arguments.
 * Return: the sum of function.
 */
int _print_in_binary(va_list args)
{
	int number = va_arg(args, int);
	int temp = 0;

	temp += _print_binary(number);
	return (temp);
}
#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
* _print_octal - function that helps to print octal.
* @number: the input number.
* Return: the sum of function.
*/
int _print_octal(int number)
{
	int i = 0;
	int count = 0;
	char octal_num;
	char zero = '0';
	int reverse_digits[70];

	if (number < 0)
	return (-1);

	if (number == 0)
	{
	write(1, &zero, 1);
	return (1);
	}
	while (number > 0)
	{
	octal_num = (number % 8) + '0';
	reverse_digits[count] = octal_num;
	count++;
	number /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
	write(1, &reverse_digits[i], 1);
	}
	return (count);
}
/**
 * _print_octal_nums - function that prints octal numbers.
 * @args: input the arguments.
 * Return: the sum of the function.
 */
int _print_octal_nums(va_list args)
{
	int o_num = va_arg(args, int);
	int sum = 0;

	sum += _print_octal(o_num);
	return (sum);
}
/**
 * _print_rev_str - function that prints str.
 * @args: navigate the arguments.
 * Return: the value of the function.
 */
int _print_rev_str(va_list args)
{
	int i;
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
	count++;
	str++;
	}
	str -= count;
	for (i = count - 1; i >= 0; i--)
	{
		write(1, &str[i], 1);
	}
	return (count);
}
