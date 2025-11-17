/// filename: func_ptr.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// globals

int global_var = 67;

/// func ptr example
int error(int dummy)
{
    if(dummy == 0 && global_var == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); /// error here
    }
    return 1;
}

/// MAIN FUNCTION

int main(int argc, char *argv[])
{
    int (*ptr) (int) = &error;

    ptr(0);

    return 0;
}

