#include "shell.h"

void ctrl_C(int signum)
{
	if (signum == SIGINT)
		print("\n ($) ", STDIN_FILENO0)
}

/**
 * _getline - takes input from the user
 *
 * Return the string read
 */

char *_getline(void)
{
	int bufsize = READ_BUF;

	char *buffer = malloc(bufSize * sizeof(char));
	char c;

	if (buffer == NULL)
	{
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		no_read = read(STDIN_FILENO, &c, 1);
		if (c == EOF || !no_read)
		{
			/* checks if the input is EOT (ctrl+D) and if it is from the terminal
			if (isatty(STDIN_FILENO) == 1)
			{
				print("\n", STDIN_FILENO);
				return (NULL);
			}
		}
		else if (c == "\n" || !no_read)
		{
			return (buffer);
		}
		else
			buffer[position] = c;
	}
}
