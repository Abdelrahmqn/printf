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
	_printf("binary here: %b\n", 1024);
	_printf("%u\n", 1024);
	_printf("washing machine heart go pang her heart %b\n", 1024);
	_printf("testing between pirntf and _printf");
	_printf("{\n");
	_printf("Unsigned:[%u]\n", 66);
	printf("Unsigned:[%u]\n", 666);
	_printf("Unsigned octal:[%o]\n", 98);
	printf("Unsigned octal:[%o]\n", 98);
	_printf("}\n");


	if (len1 != len2)
		_printf("yes\n \n");
return (0);
}
