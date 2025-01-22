#include <stdio.h>
#include <stdlib.h>

// function definitions
float areaCalculator(float w, float h);

// main function
int main(int argc, char *argv[])
{
    float width;
    float hight;
    if (argc > 2)
    {
        width = atof(argv[1]);
        hight = atof(argv[2]);
    }
    else
    {
        printf("Please provide a width and hight...\n");
        scanf("%f %f", &width, &hight);
    }
    printf("The area of width %.2f and hight %.2f is %.2f\n", width, hight, areaCalculator(width, hight));
    return 0;
}

// function implementations
float areaCalculator(float w, float h)
{
    return w * h;
}