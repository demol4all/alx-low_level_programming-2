#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number.
 * @n: the number in question
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
