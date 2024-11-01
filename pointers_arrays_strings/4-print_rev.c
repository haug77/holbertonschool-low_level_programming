#include "main.h"
/**
 * print_rev - Imprime un string invertido
 * @s: string ingresado para que la funcion imprima
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (s[l] <= 0)
	{
		_putchar(l);
		l--;
	}
	_putchar('\n');
}
