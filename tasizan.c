#include <stdio.h>

int main()
{
    int k, i, result;
    
    printf("How many teacher?");
    scanf("%d", &k);
    printf("How many students?");
    scanf("%d", &i);
    
    result = k + i;
    
    printf("The number of teacher and students is %d\n", result);

    return 0;
    
}
