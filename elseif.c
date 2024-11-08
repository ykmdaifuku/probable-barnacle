#include <stdio.h>

int main()
{
    int i, k;
    
    printf("生徒の数は何人？");
    scanf("%d", &i);
    
    printf("先生の数は何人？");
    scanf("%d", &k);
    
    if (i > k)
    {
        printf("生徒の数は先生の数より多いです。\n");
    }
    else if (i < k)
    {
        printf("先生の数は生徒の数より多いです。\n");
    }
    else
    {
        printf("先生の数と生徒の数は等しいです。\n");
    }
    
    return 0;
    
}