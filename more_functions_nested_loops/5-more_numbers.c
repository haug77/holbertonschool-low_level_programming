#include "main.h"

/**
 * more_numbers - imprime 10 veces los numeros del 0 al 14
 */
void more_numbers(void)
{
	int i = 48;
	int j;

		while (i <= 57)
		{
			i++;
			_putchar(i);
			for (j = 48; j <= 53; j++)
			{
				j = 57 + j;
				_putchar(j);
			}
		}
}
