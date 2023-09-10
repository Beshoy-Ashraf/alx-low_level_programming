#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints the alphabet in lowercase, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int b = 15, a = 0;

	while (a < b)
	{
		putchar("0123456789abcdef"[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
