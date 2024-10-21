#include<stdio.h>
int main()
{
    char a;
    printf("enter the character a:");
    scanf("%c",&a);
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("given character is an vowel %c",a);
    }
    else
    {
        printf("given character is not an vowel %c",a);
    }
    return 0;
}
