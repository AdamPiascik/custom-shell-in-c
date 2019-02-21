#include "custom-shell.h"

extern bool shell_running;

/*  This function interprets the argument list passed to it and executes
    the requested functions. */

void executeCommands (char * commands)
{
    if (!strcmp(commands, "exit")){
        exitShell();
    }
    else if (!strcmp(commands, "help")){
        printHelp();
    }
    else if (!strcmp(commands, "version")){
        printf("This is version " VERSION " of the shell.\n");
    }
    else{
        printf("Invalid command. Type \'help\' if you need some tips.\n");
    }
}