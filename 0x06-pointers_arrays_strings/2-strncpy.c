#include "main.h"
#include <string.h>

/**
 * _strncpy - writes a function that copes a string
 *
 * @dest: pointer to destination
 * @src: string to be copied
 * @n: parameter to use
 *
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
