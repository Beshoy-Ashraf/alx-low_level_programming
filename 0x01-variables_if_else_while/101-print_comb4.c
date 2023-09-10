#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints all possible different combinations of two digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m, i;

	for (n = 48; m < 58; m++)
	{
		for (m = 49; m < 58; i++)
		{
			for (i > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(i);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
