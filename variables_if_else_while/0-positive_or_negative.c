#include <stdlib.h>
#include <time.h>

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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n < 0)
	{
	printf("is negative\n");
	}
	else
	{
	printf("is zero\n");
	}

	return (0);
}
