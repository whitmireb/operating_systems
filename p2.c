#include <stdio.h>

int main()
{

    int *num1;
    int *num2;
    printf("Please provide 2 Integers\n");
    scanf("%d", num1);
    scanf("%d", num2);
    printf("These add up to %d\n", *num1 + *num2);

    return 0;
}