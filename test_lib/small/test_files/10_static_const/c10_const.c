/// filename: const.c
///
/// This should not yield a crash

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// globals

static const int c10_global_var_const = 67;

/// MAIN FUNCTION

int main()
{
    int dummy = 0;
    if(dummy == 0 && c10_global_var_const == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); /// ./test_lib/small/test_files/main.c:22: High: strcpy
    }

    return 0;
}