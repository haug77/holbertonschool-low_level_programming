#include "main.h"

/**
 * print_last_digit - imprime el ultimo digito de un numero
 * @n: parametro, el numero que la funcion tomara
 * Return: retorna el valor del ultimo digito
 */
int print_last_digit(int n)
{
int lastDig;
lastDig = n % 10;

if (lastDig < 0)
{
lastDig = -lastDig;
_putchar(lastDig + '0');
return (lastDig);
}
else
{
_putchar(lastDig + '0');
return (lastDig);
}
}
