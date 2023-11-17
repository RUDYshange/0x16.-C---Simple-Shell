#include "shell.h"

char *get_path(void)
{
	return (_getenv("PATH"));
}
