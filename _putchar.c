#include <unistd.h>

/**
 * _putchar - prints a single char to stdout.
 * @c: character to be printed
 *
 * Return: char
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
