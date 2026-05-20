#include "../include/shell.h"

void execute_command(char **args)
{
	pid_t pid=fork();
	if (pid<0)
	{
		perror("fork failed");
		return;
	}

	if (pid==0)
	{
		execvp(args[0],args);

		perror("command failed");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid,NULL,0);
	}
}
