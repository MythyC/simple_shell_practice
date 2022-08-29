#include "shell.h"

/**
 * shell process
 * 	1. prompt <-----
 * 	2. input       |
 * 	3. parse       |
 * 	4. execute -----
 */

int main (int argc __attribute__((unused)),
		char **argv)
{
	char *line;
	char *args
	int i = 0;
	(void) argv;
	
	signal(SIGINT, ctrl_C);

	while (1)
	{
		print(" ($) ", STDOUT_FILENO);
		line = _getline();

		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				break;
		}


		args = tokenize(line, DELIM);
		while (args)
			printf("<<%s>>\n", args[i++]);
		break;
	}
	return (i);
}