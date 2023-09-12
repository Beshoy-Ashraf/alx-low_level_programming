#include <stdlib.h>
#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar(10);
	return (0);
}
