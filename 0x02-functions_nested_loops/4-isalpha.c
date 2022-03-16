#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is an ascii character
 *
 * Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
