#include<stdio.h>
/**
 * main - Entry point
 *
 * Descriptio: print 0-9 using putchar
 * while using int variable
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 'O');
		digit++;
	}
	putchar('\n');

	return (0);
}