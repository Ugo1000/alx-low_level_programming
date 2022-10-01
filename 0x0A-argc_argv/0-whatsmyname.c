#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints its name, followed by new line.
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
