#include "main.h"
/**
  * _islower - check if char is lowercase
  * Return: Nothing.
  */
int _islower(int alph)
{
	if (alph >= 'a' && alph <= 'z')
		return (1);
	else
		return (0);
}
