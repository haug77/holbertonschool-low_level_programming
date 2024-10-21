#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir los numeros de un digito de base 10
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
int digits;

for (digits = 0; digits <= 9; digits++)
putchar(digits + '0');

putchar('\n');

return (0);
}
