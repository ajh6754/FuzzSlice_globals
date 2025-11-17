/// filename: struct.c
///
/// this hsould yield a crash

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct structure {
  int dummy;
} s;

s test = {10};

/// ERROR FUNCTION
int error()
{
    if(test.dummy == 10)
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
