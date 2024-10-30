#include <stdio.h>
#include "main.h"

/**
 * main - Imprimir los numeros del 1 al 100, cambiando los multiplos de 3 y 5
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a != 100)
			printf(" ");
	}
	return (0);
}
