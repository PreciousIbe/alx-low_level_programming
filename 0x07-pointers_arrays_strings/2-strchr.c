#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: The character to find
 *
 * Return:
 *returns a pointer to the first occurrence of the character
 *NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
