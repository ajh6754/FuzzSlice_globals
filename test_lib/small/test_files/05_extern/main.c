/// filename: main.c
///
/// should yield a crash with an extern

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <05_def.c>

/// MAIN FUNCTION

int main() {
    extern int global_var_extern;

    if(global_var_extern == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); 
    }

    return 0;
}
