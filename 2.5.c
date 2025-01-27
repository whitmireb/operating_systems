#include <stdio.h>

int main(int argc, char *argv[])
{

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int total = 0;
    float average;

    for (int i = 0; i < length; i++)
    {
        total += ages[i];
    }

    average = (float)total / length;
    printf("The average of these ages is %.2f\n", average);

    return 0;
}