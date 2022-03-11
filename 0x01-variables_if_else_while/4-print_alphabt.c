#include <stdio.h>
/**
 * main - This function runs first
 *
 * Return: Return integer numbers
 */
int main(void)
{
	char exc = 'a';

	while (exc <= 'z')
	{
		if (exc != 'q' && exc != 'e')
			putchar(exc);
		exc++;
	}
	putchar('\n');

	return (0);
}
