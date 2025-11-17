/// filename: struct.c
///
/// this hsould yield a crash

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct structure {
  int dummy;
} s;

s c12_global_var = {67};

/// ERROR FUNCTION
int error()
{
    if(c12_global_var.dummy == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); // error here
    }

    return 1;
}

/// MAIN FUNCTION

int main() {
    error();

    return 0;
}
