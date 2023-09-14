#include "main.h"
/**
 * print_most - function that prints 0 to 9
 * Return: 0 (Success)
 */
void print_most(void)
{
	int letter;

	for (letter = 48; letter <= 57; letter++)
	{
		if ((letter != 50) && (letter != 52))
			_putchar(letter);
	}
	_putchar(10);
}
