#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    printf("long double型の精度:%d\n", LDBL_DIG);
    printf("long double型の最大値:%Lg\n", LDBL_MAX);
    printf("long double型の最小値:%Lg\n", LDBL_MIN);

    return 0;
}