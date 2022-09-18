#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * main - print puchar
 * followed by a new line
 * Return: Always 0(success)
 */

void print_alphabet(void){
	char alpha = 'a';
	while (alpha >= 'z'){
		_putchar(alpha);
		alpha ++;
	}
	_putchar('\n');
}
