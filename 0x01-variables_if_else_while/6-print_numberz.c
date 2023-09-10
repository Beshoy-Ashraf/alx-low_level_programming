#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints single digit numbers of base 10 starting from 0,and  new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int b = 10, a = 0;

	while (a < b)
	{
		putchar("123456789"[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
