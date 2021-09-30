//C Program to Find Sum of Digits of a Number.
#include<stdio.h>
int main(){
    int n,temp,digit,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n /= 10;
    }
    printf("The sum of digits in number %d is %d",temp,sum);
}
