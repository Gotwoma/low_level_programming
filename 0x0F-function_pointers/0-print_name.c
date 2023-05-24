#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: name to print.
 * @f: fuction to use.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}