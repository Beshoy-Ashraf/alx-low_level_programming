#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if input is digit
 * @x: input
 * Return: 1 (Success)
 */
int _isdigit(int x)
{
	if ((x >= 48) && (x <= 57))
		return (1);
	else
		return (0);
}
