#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8

int main()
{
    char password[100];
    int omoji = 0, komoji = 0, suji = 0;
    
    printf("パスワードを入力してください: ");
    scanf("%99s", password);
    
    int length = strlen(password);
    int i = 0;
    while (password[i] != '\0')
    {
        if (isupper(password[i])) omoji = 1;
        if (islower(password[i])) komoji = 1;
        if (isdigit(password[i])) suji = 1;
        i++;
    }
    
    if (length >= MIN_LENGTH && omoji && komoji && suji)
    {
        printf("強いパスワードです\n");
    } 
    else
    {
        printf("強いパスワードではありません。改善点:\n");
        if (length < MIN_LENGTH) printf("パスワードは8文字以上にしてください\n");
        if (!omoji) printf("大文字を含めてください\n");
        if (!komoji) printf("小文字を含めてください\n");
        if (!suji) printf("数字を含めてください\n");
    }

    return 0;
}