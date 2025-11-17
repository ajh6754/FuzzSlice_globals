/// filename: main.c
///
/// should yield a crash with an extern

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c07_extern_struct.h"

/// MAIN FUNCTION

int main() {
    extern struct structure c07_global_var;

    if(c07_global_var.dummy == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); 
    }

    return 0;
}
