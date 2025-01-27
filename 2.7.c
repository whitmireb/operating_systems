#include <stdio.h>

int main(int argc, char *argv[])
{

    double d = 42.3;
    int i = 78;
    char c = 'b';

    double *dp = &d;
    int *ip = &i;
    char *cp = &c;

    printf("Address: %p, Value: %.2f, Memory: %lu  || double\n", &d, d, sizeof(d));
    printf("Address: %p, Value: %p, Memory: %lu  || double pointer\n", &dp, dp, sizeof(dp));
    printf("Address: %p, Value: %d, Memory: %lu  || int\n", &i, i, sizeof(i));
    printf("Address: %p, Value: %p, Memory: %lu  || int pointer\n", &ip, ip, sizeof(ip));
    printf("Address: %p, Value: %c, Memory: %lu  || char\n", &c, c, sizeof(c));
    printf("Address: %p, Value: %p, Memory: %lu  || char pointer\n", &cp, cp, sizeof(cp));

    return 0;
}