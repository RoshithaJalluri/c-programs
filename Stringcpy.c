#include <stdio.h>
#include<string.h>
int main() 
{
    char s1[10],s2[20];
    printf("Enter two strings s1 and s2: ");
    scanf("%s%s",s1,s2);
    strcpy(s1,s2);
    printf("%s",s1);
    return 0;
}
