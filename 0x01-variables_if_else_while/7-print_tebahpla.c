#include <stdio.h>
/**
 * main - This function runs first
 *
 * Return: Return integer numbers
 */
int main(void)
{
	char smile;

	for (smile = 'z'; smile >= 'a'; smile--)
	{
		putchar(smile);
	}
	putchar('\n');

	return (0);
}
