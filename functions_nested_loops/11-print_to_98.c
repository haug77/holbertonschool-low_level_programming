#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - función queimprime todos los numeros naturales de n a 98
 * @n: variable, numero que tomara la funcion
 * Return: 0 si es correcto
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
n++;
printf("%d, ", n);
}
}
if (n >= 98)
{
while (n >= 98)
{
n--;
printf("%d, ", n);
}
}
}
