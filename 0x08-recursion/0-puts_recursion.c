#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: source string
 *
 *
 * Return: the string printed.
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		putchar(*s);
		*s++;
	}
}
