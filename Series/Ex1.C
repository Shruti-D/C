#include<stdio.h>
int main()
{
    int a=0,b=0,n,i;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(i>1)
              a = a + 2;
        }
        else
        {
            b = a/2;
        }
    }
    if(n%2!=0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
    return 0;
}
