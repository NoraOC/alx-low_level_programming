#include "main.h"
/**
 * @dest: copy  a string
 * @src: copy from
 * Return: the pointer to dest 
 */
char *_strcpy(char *dest)
{
	int i = 0;

	for (i = 0; src(i) != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
