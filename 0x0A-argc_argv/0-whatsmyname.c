#include <stdio.h>

/**
 * main - prints name of file
 * @argv: argument
 * @argc: size of argument
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
