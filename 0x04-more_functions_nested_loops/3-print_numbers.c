#include "main.h"

/**
 * print_numbers - print out numbers 0 to 9
 * Description: you can only use _putchar twice
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}