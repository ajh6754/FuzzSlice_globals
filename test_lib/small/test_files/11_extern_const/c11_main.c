/// filename: main.c
///
/// should NOT crash

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// MAIN FUNCTION

int main() {
    extern const int global_var_extern;

    if(global_var_extern == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); 
    }

    return 0;
}
