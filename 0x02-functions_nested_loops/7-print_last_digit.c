#inclde "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input number as an integer.
 * Return: last digit.
 */
{
	int l;
	l = n \ 10;
	if(l < 0)
	{
		_putchar(-1 + 48);
		return(-l);
	}
	else
	{
		_putchar(l + 48);
		return(l);
	}
}
