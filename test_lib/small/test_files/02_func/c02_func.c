/// filename: func.c
/// 
/// Purpose: demontrate global variabe fuzzing within a function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// globals

int c02_global_var = 67;

/// ERROR FUNCTION
int error(int dummy)
{
    if(dummy == 0 && c02_global_var == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); /// ./test_lib/small/test_files/main.c:22: High: strcpy
    }

    return 1;
}

/// MAIN FUNCTION

int main()
{
    error(0);
    return 0;
}