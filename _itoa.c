#include <stdlib.h>
#include <stdio.h>

/**
 * _itoa - replicates itoa function
 * @a: integer to change to string.
 *
 * Return: pointer to string
 */
char *_itoa(int a)
{
	char *str;

	str = malloc(4);
	sprintf(str, "%d", a);
	return (str);
}
