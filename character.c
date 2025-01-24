#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    
    int a = (rand() % 21);
    int b = (rand() % (21 -a));
    int c = 20 - a - b;
    
    if(c < 0)
    {
        c = 0;
    }
    
    printf("intelligence:%d\n", a);
    printf("stamina:%d\n", b);
    printf("charisma:%d\n", c);
    
    if(a > b && a > c)
    {
        printf("You are mage.\n");
    }
    else if(b > a && b > c)
    {
        printf("You are knight.\n");
    }
    else if(c > a && c > b)
    {
        printf("You are thief.\n");
    }
    else
    {
        printf("You are multiclass.\n");
    }
    
    
    return 0;
}