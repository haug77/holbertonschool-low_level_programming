#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir el tama√o de varios tipos de datos
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
#if defined(__x86_64__) || defined(_M_X64)
printf("Size of a char: 1 byte(s)\n");
printf("Size of an int: 4 byte(s)\n");
printf("Size of a long int: 8 byte(s)\n");
printf("Size of a long long int: 8 byte(s)\n");
printf("Size of a float: 4 byte(s)\n");
#elif defined(__i386__) || defined(_M_IX86)
printf("Size of a char: 1 byte(s)\n");
printf("Size of an int: 4 byte(s)\n");
printf("Size of a long int: 4 byte(s)\n");
printf("Size of a long long int: 8 byte(s)\n");
printf("Size of a float: 4 byte(s)\n");
#else printf("Arquitectura desconocida.\n");
#endif

return (0);
}
