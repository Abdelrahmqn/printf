#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
* _print_binary - function that helps to print binary
* @number: the input number.
*
*/
int _print_binary(int number)
{
int count = 0;
char binary_num;
char zero = '0';

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
count++;
write(1, &binary_num, 1);
number /= 2;
}
return (count);
}

