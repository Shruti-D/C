//Consider the following series:
//0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16,8,...
//The series is a mixture of 2 Geometric progression:
//1] All odd term are 2 times bigger than the previous term at the odd position.
//2] All even terms are dividend we get after dividing odd terms with 2.
//WAP to print the nth term in the series.
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
