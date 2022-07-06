#include  "main.h"
/**
* print_alphabet_x10 - a function that prints 10times
*
* Return (0)
*/
void print_alphabet_x10(void)
{
	int i, p;

	for (i = 0; i <= 9; i++)
	{
		for (p = 97; p <= 122; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}

}

