#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir el abecedario lowercase y uppercase
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
putchar(abc);

for (abc = 'A'; abc <= 'Z'; abc++)
putchar(abc);

putchar('\n');

return (0);
}
