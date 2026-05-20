#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_ARGS 64

void show_prompt(void);
void parse_input(char *line,char **args);
void execute_command(char **args);
void change_directory(char **args);
void clear_screen(void);

#endif
