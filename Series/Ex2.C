//Consider the following series:
// 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187,....
//The series is a mixture of 2 series - 
//1] All odd terms in the series form a gemoetric series[Multiple of 2]
//2] All even terms in the series form yet another geometric series[Multiple of 3]
//WAP to find nth term in the series.
#include<stdio.h>
int main()
{
    int i, n, a=0, b=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(i==1)
             a = 1;
            else
             a = a * 2;
        }
        else{
            if(i==2)
             b = 1;
            else
             b = b * 3;
        }
    }
    if(n%2!=0)
     printf("%d",a);
    else
     printf("%d",b);
    return 0;
}
