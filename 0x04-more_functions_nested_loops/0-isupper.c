#include "main.h"
#include <stdio.h>
/**
 * _isupper - a function check upercase character.
 * @x: input
 * Return: 1 (Success)
 */
int _isupper(int x)
{
	if ((x >= 'A') && (x <= 'Z'))
		return (1);
	else
		return (0);
}

