#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char *letter1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letter2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter1[j])
			{
				s[i] = letter2[j];
				break;
			}
		}
	}
	return (s);
}
