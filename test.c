#include <stdio.h>
#include <stdlib.h>

// Global X
int x = 57;

void greeting()
{
    int x = 90;
    printf("X is %d\n", x);
}

int main(int argc, char *argv[])
{
    greeting();
    printf("X is %d\n", x);
    return 0;
}