/// filename: func_ptr.c
/// 
/// Purpose: to test func pointers getting broken tbh

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// globals

int global_var = 67;

/// func ptr example ig
int hello()
{
    int i = 0;
}

/// MAIN FUNCTION

int main()
{
    int (*ptr) () = &hello;
    int dummy = 0;
    if(dummy == 0 && global_var == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input);
    }

    ///if(dummy == 0)
    ///{
        ///char input[6] = "Hello";
        ///char buffer[1];
        ///strcpy(buffer, input);
    ///}
    ///./test_lib/small/test_files/func_ptr.c:29: High: strcpy

    return 0;
}