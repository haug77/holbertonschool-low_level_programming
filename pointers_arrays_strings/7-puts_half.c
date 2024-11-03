#include "main.h"
/**
 * puts_half - Imprimr la segunda mitad de un string
 * @str: string ingresado para que la funcion imprima
 */
void puts_half(char *str)
{
	int a = 0;
	int b, c;

	while (str[a] != '\0')
		a++;

	if (a % 2 == 0)
		b = a / 2;

	else
		b = (a + 1) / 2;

	for (c = b; c < a; c++)
		_putchar(str[c]);

	_putchar('\n');
}
