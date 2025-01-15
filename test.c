#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float temperature;

    if (argc > 1)
    {
        temperature = atof(argv[1]);
    }
    else
    {
        printf("Please provide a temperature in Ferinhieight.\n");
        scanf("%f", &temperature);
    }

    printf("%d\n", temperature > 70 && temperature < 85);

    return 0;
}