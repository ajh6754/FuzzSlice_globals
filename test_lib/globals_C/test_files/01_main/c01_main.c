/// filename: main.c
/// 
/// Purpose: to demonstrate global variable fuzzing at a super light level

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// globals

int c01_global_var = 67;

/// MAIN FUNCTION

int main()
{
    int dummy = 0;
    if(dummy == 0 && c01_global_var == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); 
    }

    return 0;
}