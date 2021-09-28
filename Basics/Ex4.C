//Program to find the sum of numbers in a given range in C.
#include<stdio.h>
int main(){
    int start,end,i,sum=0;
    printf("Enter the start and end of the range:");
    scanf("%d\n%d",&start,&end);
    for(i=start;i<=end;i++){
        sum=sum+i;
    }
    printf("Sum of number from %d to %d is: %d", start, end, sum);
    return 0;
}
