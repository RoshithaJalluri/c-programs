#include<stdio.h>
void main()
{
    int i,n;
    int long fact=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        fact=fact*i;
    }
    printf("The factorial is %ld",fact);
}
