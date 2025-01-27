#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number\n");
    scanf("%d", &num);
    printf("Your number is %s!\n", num % 2 == 0 ? "even" : "odd");
    return 0;
}