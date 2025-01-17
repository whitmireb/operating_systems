#include <stdio.h>

int main()
{
    double d = 2.331;
    printf("Double | Value: %f, mem location: %p, size: %lu\n", d, &d, sizeof(d));
    double *dptr = &d;
    printf("Double Ptr | Value: %p, mem location: %p, size: %lu\n", dptr, &dptr, sizeof(dptr));
    int i = 20;
    printf("Int | Value: %d, mem location: %p, size: %lu\n", i, &i, sizeof(i));
    int *iptr = &i;
    printf("Int Ptr | Value: %p, mem location: %p, size: %lu\n", iptr, &iptr, sizeof(iptr));
    char c = 'b';
    printf("Char | Value: %c, mem location: %p, size: %lu\n", c, &c, sizeof(c));
    char *cptr = &c;
    printf("Char Ptr | Value: %p, mem location: %p, size: %lu\n", cptr, &cptr, sizeof(cptr));
    return 0;
}