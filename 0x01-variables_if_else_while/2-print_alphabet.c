#include <stdio.h>
/**
 * main- prints the alphabet in lowercase,makes use of the putchar function
 * Return: should return zero
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
};
putchar('\n');
return (0);
}
