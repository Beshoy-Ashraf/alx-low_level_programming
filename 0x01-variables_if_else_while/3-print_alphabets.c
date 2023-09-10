#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase,and then in uppercase and new line.
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
