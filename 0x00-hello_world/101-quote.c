#include <unistd.h>

/**
 * main - Prints a string to standard error
 * Return: 1
 */
int main() {
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 47);
	return 1;
}

