#include "main.h"

/**
 * *_memset - fill memory with a byte
 * @s: pointer to put the constant
 * @b: constat
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
