#include <stdio.h>
int main()
{
    int n,temp,sum=0,rem;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("\n Armstrong number",n);
    }
    else
    {
        printf("\n Not an Armstrong number",n);
    }
    return 0;
}
