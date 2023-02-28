#include<stdio.h>
#include"main.h"

void myputs(char *string)
{
	while(*string)
	{
		_putchar(*string);
		string++;
	}
	_putchar('\0');
	_putchar('\n');
}

