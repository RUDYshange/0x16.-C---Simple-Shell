#include "shell.h"

static char *last_input;

char *get_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t nread;

	do {
		
		prompt();
		nread = getline(&input, &input_size, stdin);

		if (nread == -1)
		{
			free(input);
			_puts("\n");
			return (NULL);
		}

		input[nread - 1] = '\0';

	} while (input[0] == '\0' || isspace(input[0]));

	/* update last_input to point to the new input */
	last_input = input;
	return (input);
}

void free_last_input(void)
{
	free(last_input);
	last_input = NULL;
}
