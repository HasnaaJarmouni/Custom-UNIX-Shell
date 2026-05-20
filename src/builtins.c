#include "../include/shell.h"

void change_directory(char **args)
{
	if (args[1]==NULL)
	{
		printf("cd: missing arguments\n");
		return;
	}

	if (chdir(args[1])!=0)
	{
		perror("cde failed");
	}
}

void clear_screen(void)
{
	system("clear");
}
