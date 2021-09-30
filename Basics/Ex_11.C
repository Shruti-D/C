//C Program to Reverse a given number.
#include<stdio.h>
int main(){
    int num,rem,rev=0;
    printf("Enter a Number to be Reversed:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("The Reversed Number: %d",rev);
    return 0;
}
