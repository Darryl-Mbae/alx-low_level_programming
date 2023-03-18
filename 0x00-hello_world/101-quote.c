#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Prints a string to standard error
 * Return: 1
 */
int main(void)
{
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, 1, message, sizeof(message));;
	return (1);
}

