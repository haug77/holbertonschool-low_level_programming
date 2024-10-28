#include "main.h"

/**
 * print_most_numbers - imprime los numeros del 0 al 9 a exepcion del 2 y el 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			i = i + 1;
		_putchar(i);
	}
	_putchar('\n');
}
