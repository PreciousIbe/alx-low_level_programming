#include <stdio.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0
 */

int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
