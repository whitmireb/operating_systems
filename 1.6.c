#include <stdio.h>

int main()
{
    float num;
    printf("Please enter a number\n");
    scanf("%f", &num);
    printf("Your number is %s!\n", num < 0 ? "negative" : (num > 0 ? "positive" : "zero"));
    return 0;
}