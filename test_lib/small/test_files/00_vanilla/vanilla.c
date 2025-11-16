/// filename: vanilla.c
/// 
/// Purpose: demonstrate a simple file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// MAIN FUNCTION
int main(int argc, char * argv[])
{
    int dummy = 0;
    if(dummy == 0)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); 
    }

    return 0;
}