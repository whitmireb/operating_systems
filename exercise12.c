#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function definitions
float areaCalculator(float r);

// main function
int main(int argc, char *argv[])
{
    float radius;
    if (argc > 1)
    {
        radius = atof(argv[1]);
    }
    else
    {
        printf("Please provide a radius...\n");
        scanf("%f", &radius);
    }
    printf("The area of a circle with a radius %.2f is %.2f\n", radius, areaCalculator(radius));
    return 0;
}

// function implementations
float areaCalculator(float r)
{
    return 3.14 * pow(r, 2);
}