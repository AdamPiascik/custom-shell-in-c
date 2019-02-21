/* Header file for the custom shell. */

#ifndef CUSTOM_SHELL
#define CUSTOM_SHELL

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// some default parameters
#define DEFAULT_BUFFER_CHARACTERS 128
#define DEFAULT_ARG_COUNT 10
// version of the program
#define VERSION "0.1.0"

// function prototypes from parsing.c
char * readInput (void);
char ** parse(char *line);
// function prototypes from commands.c
void executeCommands (char * command);
// function prototypes from exit.c
void exitShell (void);
// function prototypes from help.c
void printHelp (void);

#endif
