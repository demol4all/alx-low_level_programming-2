#include "main.h"
/**
* _abs - a function that computes the absolute value of an integer
* Description: computes the absolute value of an integer.
* @n: - integer in question
* Return: absolute value of integer
*/
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
