#include "main.h"

/**
 * print_last_digit - imprime el ultimo digito de un numero
 * @u: parametro, el numero que la funcion tomara
 * Return: retorna el valor del ultimo digito
 */
int print_last_digit(int u)
{
_putchar(u % 10);
return (u % 10);
}
