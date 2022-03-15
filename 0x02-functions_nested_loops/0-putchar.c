#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 * */
int main(void)
{
	char ermiyas[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(ermiyas[c]);
	}
	_putchar('\n');
	return (0);
}
