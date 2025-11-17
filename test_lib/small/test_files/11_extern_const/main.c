/// filename: main.c
///
/// should NOT crash

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <11_def.c>

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
