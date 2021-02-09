#include "holberton.h"

/**
  * _abs - calculates absolute value of a number
  * @n: the number being checked
  *
  * Return: 0 when succesfuly executed
  */
int _abs(int n)
{

	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	return (0);
}

