#include <stdio.h>

int main(int argc, char *argv[])
{
    float temperature;
    if (argc > 1)
    {
        int i;
        for (i = 0; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    // printf("Please provide a temperature in Ferinhieight.\n");
    // scanf("%f", &temperature);
    // printf("%d\n", temperature > 70 && temperature < 85);
    return 0;