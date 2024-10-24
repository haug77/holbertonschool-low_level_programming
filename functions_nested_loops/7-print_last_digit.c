#include "main.h"

/**
 * print_last_digit - imprime el ultimo digito de un numero
 * @u: parametro, el numero que la funcion tomara
 * Return: retorna el valor del ultimo digito
 */
int print_last_digit(int u)
{
int e = u % 10;
_putchar(e);
return (e);
}
