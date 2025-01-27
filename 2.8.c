#include <stdio.h>

int main()
{

    int *x;
    int *y;

    printf("Please provide two integers\n");
    scanf("%d", x);
    scanf("%d", y);

    printf("These numbers add up to: %d\n", *x + *y);

    return 0;
}