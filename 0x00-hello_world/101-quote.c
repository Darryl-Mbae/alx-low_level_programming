#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
/**
 * main - Prints a string to standard error
 * Return: 1
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t message_len = strlen(msg);

	syscall(SYS_write, 2, msg, message_len);
	return (1);
}

