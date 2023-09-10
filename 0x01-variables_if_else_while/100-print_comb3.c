#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints all possible different combinations of two digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int b = 46, a = 0;

	while (a + 1 < b)
	{
		putchar("000000000111111112222222333333444445555666778"[a]);
		putchar("123456789234567893456789456789567896789789899"[a]);
		a++;
		if (a < 45)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
