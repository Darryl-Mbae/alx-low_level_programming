#include <unistd.h>

/**
 * main - Prints a string to standard error
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = sizeof(str) - 1;
	int ret_val;	
	ret_val = write(STDERR_FILENO, str, len);
	if (ret_val != len)
		return (1);

	return (1);
}
