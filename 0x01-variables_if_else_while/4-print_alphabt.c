#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints alphabet in lowercase, except q and e and a new line.
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
