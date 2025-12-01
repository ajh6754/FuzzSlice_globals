/// filename: vanilla.c
/// 
/// Purpose: demonstrate a simple file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// MAIN FUNCTION
int main(int argc, char * argv[])
{
    if(argc == 2)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); /// error here
    }

    return 0;
}