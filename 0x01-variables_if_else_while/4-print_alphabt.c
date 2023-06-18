#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all alphabet letters expect q and e i
 *
 * return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
