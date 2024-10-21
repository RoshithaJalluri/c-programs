#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,largest;
    printf("enter the values of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    largest=((a>b && a>c)?a:((b>c)?b:c));
    printf("the largest no is %d",largest);
    return 0;
}
