#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Imprimir el size de varios tipos de datos
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
#if defined(__x86_64__)
printf("Size of a char: 1 byte(s)\n");
printf("Size of an int: 4 byte(s)\n");
printf("Size of a long int: 8 byte(s)\n");
printf("Size of a long long int: 8 byte(s)\n");
printf("Size of a float: 4 byte(s)\n");
#elif defined(__i386__)
printf("Size of a char: 1 byte(s)\n");
printf("Size of an int: 4 byte(s)\n");
printf("Size of a long int: 4 byte(s)\n");
printf("Size of a long long int: 8 byte(s)\n");
printf("Size of a float: 4 byte(s)\n");
#else printf("Arquitectura desconocida.\n");
#endif

return (0);
}
