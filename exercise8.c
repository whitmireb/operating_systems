#include <stdio.h>

int main(int argc, char *argv[])
{

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int total = 0;
    int low = ages[0];
    int average;

    for (int i = 0; i < length; i++)
    {
        total += ages[i];
        if (ages[i] < low)
        {
            low = ages[i];
        }
    }

    average = total / length;
    printf("The average of these ages is %d\n", average);
    printf("The Lowest of these ages is %d\n", low);

    return 0;
}