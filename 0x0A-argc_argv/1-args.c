#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
