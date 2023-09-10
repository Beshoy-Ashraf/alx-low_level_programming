#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints the alphabet in lowercase, and then in uppercase followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int b = 52, a = 0;

	while (a < b)
	{
		putchar("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
