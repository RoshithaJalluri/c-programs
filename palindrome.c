#include <stdio.h>
int main()
{
    int n,temp,rev=0,rem;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("\n Palindrome",n);
    }
    else
    {
        printf("\n Not an Palindrome",n);
    }
    return 0;
}
