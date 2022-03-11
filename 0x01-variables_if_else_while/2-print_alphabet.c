#include <stdio.h>
/**
 * main - This function runs first
 *
 * Return: Return integer numbers
 */
int main(void)
{
	char alph = 'a';

	while (alph  <= 'z')
	{
		putchar (alph);
		alph++;
	}
	putchar ('\n');

	return (0);
}
