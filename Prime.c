#include <stdio.h>
#include <math.h>
int main() {
    int i,n,flag=0;
    printf("enter the value: ");
    scanf("%d",&n);
    if(n==0 || n==1)
    flag=1;
    for(i=2;i<=n;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("prime",n);
    else
    printf("not prime",n);
    return 0;
}
