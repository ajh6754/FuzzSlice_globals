/// filename: func_ptr.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// globals

int global_var = 67;

/// func ptr example
int hello()
{
    int i = 0;
    return i;
}

/// MAIN FUNCTION

int main(int argc, char *argv[])
{
    int (*ptr) () = &hello;
    int dummy = 0;
    if(dummy == 0 && global_var == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input);
    }

    return 0;
}

