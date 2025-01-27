#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%ld\n", numStudents * sizeof(*students));

    return 0;
}