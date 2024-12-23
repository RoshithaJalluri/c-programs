#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Given number is prime");
    }
    else
    {
        printf("Given number is not a prime");
    }
}
