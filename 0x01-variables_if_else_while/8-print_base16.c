#include <stdio.h>
/**
 * main- prints all the numbers of base 16 in lowercase
 * Return: should return zero
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
