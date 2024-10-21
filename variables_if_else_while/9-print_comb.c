#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir todos los numeros de un digito separados por coma
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
int nros = '0';

while (nros <= '9')
{
putchar(nros);

if (nros != '9')
{
putchar(*",");
putchar(*" ");
}

nros++;
}

putchar('\n');

return (0);
}
