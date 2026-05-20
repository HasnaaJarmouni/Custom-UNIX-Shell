#include "../include/shell.h"

int main(void)
{
	char *line=NULL;
	size_t len=0;

	char *args[MAX_ARGS];
	while(1)
	{
		show_prompt();
		getline(&line,&len,stdin);
		line[strcspn(line,"\n")]='\0';
		
		if (strlen(line)==0)
		{
			continue;
		}

		parse_input(line,args);

		if (strcmp(args[0],"exit")==0)
		{
			break;
		}

		if (strcmp(args[0],"cd")==0)
		{
			change_directory(args);
			continue;
		}

		if (strcmp(args[0],"clear")==0)
		{
			clear_screen();
			continue;
		}
		
		execute_command(args);
	}
	free(line);
	return 0;
}
