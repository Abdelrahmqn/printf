#include "main.h"
/**
 * main - Entry point
 * return: the test of the file
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("integer: %d, string: %s, character: %c\n",-10, "hello printf", 'A');
	len2 = _printf("integer: %d, string: %s, character: %c\n",-10, "hello printf", 'A');

	_printf("%i ,%i\n", len1, len2);
return (0);
}
