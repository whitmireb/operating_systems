#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function definitions
float tempConversion(float f);

float areaCalculator(float w, float h);

float cirAreaCalculator(float r);

// main function
int main()
{
    float temp = 70;

    float width = 20;
    float hight = 25;

    float radius = 30;

    printf("%.2fF is %.2fC in Celsius\n", temp, tempConversion(temp));

    printf("The area of width %.2f and hight %.2f is %.2f\n", width, hight, areaCalculator(width, hight));

    printf("The area of a circle with a radius %.2f is %.2f\n", radius, cirAreaCalculator(radius));

    return 0;
}

// function implementations
float tempConversion(float f)
{
    return (f - 32) * (5.0 / 9);
}

float areaCalculator(float w, float h)
{
    return w * h;
}

float cirAreaCalculator(float r)
{
    return 3.14 * pow(r, 2);
}