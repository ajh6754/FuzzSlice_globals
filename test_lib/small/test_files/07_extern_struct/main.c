/// filename: main.c
///
/// should yield a crash with an extern

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <extern_struct.c>

/// MAIN FUNCTION

int main() {
    extern struct structure test;

    if(test.dummy == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); 
    }

    return 0;
}
