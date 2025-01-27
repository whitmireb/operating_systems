#include <stdio.h>

int main()
{

    int numItems = 100;
    float price = 200;

    printf("The number of items is %d.\n", numItems);
    printf("The price of each item is $%.2f.\n", price);
    printf("The total cost is $%.2f.\n", numItems * price);
}