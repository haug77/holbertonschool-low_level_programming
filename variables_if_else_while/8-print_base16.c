#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir los numeros de base 16
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
char base16;

for (base16 = '0'; base16 <= '9'; base16++)
{
putchar(base16);
if (base16 == 9)
for (base16 = 'a'; base16 <= 'f'; base16++)
putchar(base16);
}

putchar('\n');

return (0);
}
