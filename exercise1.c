#include <stdio.h>

int main()
{
    float temperature;
    printf("Please provide a temperature in Ferinhieight.\n");
    scanf("%f", &temperature);
    printf("%d\n", temperature > 70 && temperature < 85);
    return 0;
}