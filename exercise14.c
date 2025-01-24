#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;
    fptr = fopen("hello.txt", "r");

    if (fptr != NULL)
    {
        // fseek(fptr, 0, SEEK_END);
        // printf("%ld\n", ftell(fptr));
        char s[2];
        while (fgets(s, sizeof(s) / sizeof(s[0]), fptr))
        {
            printf("%s", s);
        }
    }
    else
    {
        printf("Couldn't open the file :(\n");
    }

    fclose(fptr);
    return 0;
}