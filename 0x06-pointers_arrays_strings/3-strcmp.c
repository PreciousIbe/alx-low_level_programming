#include <string.h>
#include "main.h"

/**
 * _strcmp - this function compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return:
 *	returns 0 if they are equal,
 *	positive if s1 > s2,
 *	negative if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
