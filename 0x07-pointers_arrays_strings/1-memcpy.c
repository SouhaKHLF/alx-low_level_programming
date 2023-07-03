#include "main.h"
/**
 * *_memcpy - copies memory area
 *
 * @n: length of src to be copied
 * @src: bytes from memory area
 * @dest: memory area
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
	{
		dest[it] = src[it];
	}
	return (dest);
}
