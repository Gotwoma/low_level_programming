#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: character to be checked
 *
 * Return: 1 if c is lowecase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
