#include "main.h"
/**
 * _isupper - check of c is upper.
 *
 *@c: input for alphabet
 *
 * Return: 1 if its uppercase. O if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
