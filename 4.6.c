#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *scores;
    int numStudents;
    FILE *fp;
    fp = fopen("text.txt", "w");
    if (fp == NULL)
    {
        printf("file couldn't open :(\n");
    }
    else
    {
        printf("Please provide the number of students\n");
        scanf("%d", &numStudents);
        scores = calloc(numStudents, sizeof(scores[0]));
        printf("Please enter a score for each student\n");
        for (int i = 0; i < numStudents; i++)
        {
            scanf("%d", scores + i);
        }
        for (int i = numStudents - 1; i >= 0; i -= 1)
        {
            fprintf(fp, "%d\n", scores[i]);
        }
        free(scores);
    }

    return 0;
}