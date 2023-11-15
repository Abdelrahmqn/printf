#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 * return: the test of the file
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("char: %c, string: %s\n", 'U', "printf function");
	len2 = _printf("char: %c, string: %s\n", 'U', "printf function");
	_printf("Let's print a simple sentence.\n");
	_printf("%s\n", "I am a string !");
	_printf("%c\n", 'S');
	_printf("%%\n");
	_printf("%d\n", 1024);
	_printf("%d\n", -1024);
	_printf("binary number of 98: %b\n", 98);
	if (len1 != len2)
		_printf("yes\n \n");
return (0);
}
