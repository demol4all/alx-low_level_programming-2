#include "main.h"
/**
 * _isalpha - a function that checks for alphabetical character
 * @c:character in question
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
