#include "main.h"
/**
 * main - Entry point
 * return: the test of the file
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("char: %c, string: %s\n", 'U', "printf function");
	len2 = _printf("char: %c, string: %s\n", 'U', "printf function");
	_printf("%i ,%i\n", len1, len2);
	_printf("%c\n", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
return (0);
}
