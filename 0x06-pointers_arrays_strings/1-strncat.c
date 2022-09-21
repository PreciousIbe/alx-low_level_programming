#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @src: uses n bytes
 * @dest: resulting string
 * @n: int parameter
 *
 * Return: returns pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
