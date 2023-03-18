#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
/**
 * main - Prints a string to standard error
 * Return: 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t message_len = strlen(message);

	syscall(SYS_write, 2, message, message_len);
	return (1);
}

