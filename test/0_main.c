#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - tests my function.
 *
 * return: 0 on succss
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("char : %c , string: %s\n", 'k', "hi");
	len2 = _printf("char : %c , string: %s\n", 'k', "hi");
	_printf("%d %d\n", len1, len2);
	return (0);
}
