#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *            using two input parametres
 *
 * @a: input parametre 1
 * @b: input parametre 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
