#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Punto de entrada del programa
 *
 * Funcion - Declarar si n es positivo, negativo o cero
 *
 * Return: 0 si se ejecuta correctamente
 */

int main(void)
{
int n;
int lastDig;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDig = n % 10;

if (lastDig > 5)
printf("Last digit of %d is greater than 5\n", n);
else if (lastDig == 0)
printf("Last digit of %d is 0\n", n);
else
printf("Last digit of %d is less than 6 and not 0\n", n);

return (0);
}
