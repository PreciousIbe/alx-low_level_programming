#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings str and dest string
 * @dest: string to append to
 * @src: string to append
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
