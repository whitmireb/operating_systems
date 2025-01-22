#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nums[4] = {1, 2, 50, 4};
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        printf("%d\n", *(nums + i));
    }

    return 0;
}