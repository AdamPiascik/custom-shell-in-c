#include "custom-shell.h"

extern bool shell_running;

/*  The below function terminates the shell. It prints a message and set the
    global variable "shell_running" to false. This is put in a separate file
    in case any further code to perform shutdown actions is needed. */

void exitShell (void)
{
    printf("Exiting shell...");
    shell_running = false;
}