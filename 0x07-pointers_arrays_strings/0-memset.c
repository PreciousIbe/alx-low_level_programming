#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: a pointer input
 * @b: a constant byte character
 * @n: an input integer
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *begin = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (begin);
}
