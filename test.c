#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num = 55;
    int *ptr = &num;
    printf("age: %d\n", num);
    printf("pointer %p\n", &num);
    printf("pointer %d\n", *ptr);

    return 0;
}