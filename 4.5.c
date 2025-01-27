#include <stdio.h>
#include <stdlib.h>

struct House
{
    char address[50];
    int squarefeet;
    int num_bedroom;
    int num_bathroom;
    int price;
};

int main()
{
    struct House house1 = {"1234 Lake Drive", 1000, 4, 4, 5};
    struct House house2 = {"5678 Burger Steet", 2000, 7, 3, 100000};
    struct House house3 = {"3750 Taco Trail", 47000, 10, 14, 36000};

    printf("%s, %d, %d, %d, %d\n", house1.address, house1.squarefeet, house1.num_bedroom, house1.num_bathroom, house1.price);
    printf("%s, %d, %d, %d, %d\n", house2.address, house2.squarefeet, house2.num_bedroom, house2.num_bathroom, house2.price);
    printf("%s, %d, %d, %d, %d\n", house3.address, house3.squarefeet, house3.num_bedroom, house3.num_bathroom, house3.price);
}