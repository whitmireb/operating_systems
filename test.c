#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fptr;

    fptr = fopen("text.txt", "a");
    char s[1];

    while (fgets(s, sizeof(s) / sizeof(s[0]), fptr))
    {
        printf("%s", s);
    }

    fclose(fptr);

    return 0;
}