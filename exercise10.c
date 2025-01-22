#include <stdio.h>
#include <stdlib.h>

// function definitions
float tempConversion(float f);

// main function
int main(int argc, char *argv[])
{
    float temp;
    if (argc > 1)
    {
        temp = atof(argv[1]);
    }
    else
    {
        printf("Please provide a temperature in Fahrenheit...\n");
        scanf("%f", &temp);
    }
    printf("%.2fF is %.2fC in Celsius\n", temp, tempConversion(temp));
    return 0;
}

// function implementations
float tempConversion(float f)
{
    return (f - 32) * (5.0 / 9);
}