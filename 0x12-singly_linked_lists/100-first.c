#include <stdio.h>

/**
 * first - function executed before main
 * Return: return 0.
 * Author : LAYLA BOUHAD
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
