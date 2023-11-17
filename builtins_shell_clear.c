#include "shell.h"

int shell_clear(char **args)
{
	(void)args; 
	_puts("\033[2J\033[H");
	return (1);
}
