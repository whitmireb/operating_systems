#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int size = 10;
    if (argc > 1)
    {
        size = atoi(argv[1]);
    }

    printf("     ");
    for (int i = 1; i <= size; i++)
    {
        printf("%3d", i);
    }
    printf("\n     ");
    for (int i = 1; i <= size; i++)
    {
        printf("---");
    }
    printf("\n");

    for (int i = 1; i <= size; i++)
    {
        printf("%3d |", i);
        for (int j = 1; j <= size; j++)
        {
            printf("%3d", i * j);
        }
        printf("\n");
    }

    return 0;
}