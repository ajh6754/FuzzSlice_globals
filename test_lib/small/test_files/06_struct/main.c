/// filename: struct.c
///
/// this hsould yield a crash

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct structure {
  int dummy;
};

/// ERROR FUNCTION
int error(struct structure p)
{
    if(p.dummy == 10)
    {
        char input[6] = "Hello";
        char buffer[1];
        strcpy(buffer, input); // error here
    }

    return 1;
}

/// MAIN FUNCTION

int main() {
    struct structure test;
    test.dummy = 10;

    error(test);

    return 0;
}
