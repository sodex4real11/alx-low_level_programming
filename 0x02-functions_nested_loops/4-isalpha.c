#include "main.h"

/**
 * _isalpha - check if a character is an alphabet
 * @c: the character
 * Return: 1 if the character is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
