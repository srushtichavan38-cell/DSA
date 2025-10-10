#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    if(b!=0)
    {
      return gcd(b,a%b);
    }
    else{
        return a;
    }
}

int main()
{
    int a,b;
    printf("\n read values for a and b:\n");
    scanf("%d%d",&a,&b);
    printf("\n gcd of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}
