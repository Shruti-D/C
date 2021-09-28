//C Program to Find the Sum of First N Natural Numbers.
//Formula to find N Natural Numbers: (n*(n+1))/2
//Method 1.
#include<stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the First N Natural Number:");
    scanf("%d",&num);
    sum = (num*(num+1))/2;
    printf("The sum of first %d natural numbers: %d\n",num,sum);
    return 0;
}

//Method 2.
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the First N Natural numbers:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("Sum of First %d natural numbers: %d\n",num,sum);
    return 0;
}
