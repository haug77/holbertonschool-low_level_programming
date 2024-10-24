#include "main.h"

/**
 * print_sign - Retorna un valor segun sea la variable
 * @n: un caracter ASCII
 * Return: 1 si n > 0, 0 si n = 0, -1 si n < 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
