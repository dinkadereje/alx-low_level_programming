#include <stdio.h>
#include <unistd.h>
/**
 * main - This function runs first
 *
 * Return: Return integer numbers
 */
int main(void)
{
char sent[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, sent, sizeof(sent));
return (1);
}
