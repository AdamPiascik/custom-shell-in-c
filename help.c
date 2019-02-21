#include "custom-shell.h"

/*  This function will print helpful information on the various commands
    available in the shell. Put in a separate file to aid clarity when this
    get larger. */

void printHelp (void)
{
    printf( "\nThe list of possible commands are:\n\n"
        "exit\n\tExits the custom shell.\n"
        "version\n\tDisplays the current version of the shell.\n\n");
}