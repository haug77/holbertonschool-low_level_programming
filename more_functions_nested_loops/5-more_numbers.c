#include "main.h"

/**
 * more_numbers - imprime 10 veces los numeros del 0 al 14
 */
void more_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
