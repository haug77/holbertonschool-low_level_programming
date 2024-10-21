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
char digits;

for (digits = '0'; digits <= '9'; digits++)
putchar(digits);

putchar('\n');

return (0);
}
