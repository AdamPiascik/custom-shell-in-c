#include "custom-shell.h"

extern bool shell_running;
extern char **arg_list;
extern char *buffer;

/*  This function reads input from stdin into a buffer to be interpreted. */

char * readInput (void)
{
    int buffer_position = 0;
    char c;
    
    buffer = (char *) malloc(DEFAULT_BUFFER_CHARACTERS * sizeof(char));
    do{
        c = getchar();
        if (c == EOF || c == '\n'){
            buffer[buffer_position] = '\0';
            break;
        }
        else{           
            buffer[buffer_position] = c;
        }
        ++buffer_position;
    } while (true);
    return buffer;
}

/*  This function splits the buffer up into separate arguments, stored in a
    contiguous memory block. It returns a pointer to the start of the block. */

char ** parse (char *line)
{
    int counter = 0;
    char    *token,
            sep = ' ';

    if (!strcmp(line, "")){return (char **) NULL;}
    arg_list = (char **) malloc(DEFAULT_ARG_COUNT * sizeof(char *));
    token = strtok(buffer, &sep);
    do{
        arg_list[counter++] = token;
        token = strtok(NULL, &sep);
    } while(token != NULL);
    return arg_list;
}