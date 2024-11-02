#include "main.h"
/**
 * rev_string - Invierte un string
 * @s: string ingresado para que la funcion imprima
 */
void rev_string(char *s)
{
	int l = 0;
	int m = 0;

	while (s[l] != '\0')
		l++;
	l--;
	while (m < l)
	{
		n = s[m];
		s[m] = s[l];
		s[l] = n;
		m++;
		l--;
	}
}
