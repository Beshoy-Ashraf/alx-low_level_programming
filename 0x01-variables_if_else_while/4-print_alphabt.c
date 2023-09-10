#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int b = 24, a = 0;

	while (a < b)
	{
		putchar("abcdfghijklmnoprstuvwxyz"[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
