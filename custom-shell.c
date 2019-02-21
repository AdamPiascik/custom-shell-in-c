#include "custom-shell.h"

/* Global variables to keep track of some things. */
bool shell_running = true;
char **arg_list;
char *buffer;

/*  Main function to start the shell. Will run on the command line until
    the "exit" command is invoked. */

int main (void)
{
    printf("Welcome to your custom shell interface!\n");
    do{
        printf(">>>");
        arg_list = parse(readInput());
        if (arg_list == NULL){continue;}
        else{executeCommands(*arg_list);}
        free(buffer);
        free(arg_list);
    } while (shell_running);
    return 0;
}