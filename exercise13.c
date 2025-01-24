#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;
    fptr = fopen("hello.txt", "w");

    fprintf(fptr, "Hello,\nHow are you?\nMy name is ...\nWhat's your name?\n");

    fclose(fptr);
    return 0;
}