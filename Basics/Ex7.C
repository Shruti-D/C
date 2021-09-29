//C Program to Check Year is a Leap Year or Not.
//For a year to be leap year it should:
//1. either be divisible by 4 and not divisible by 100.
//2. or be divisble by 400. 
#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year:");
    scanf("%d",&year);
    if(((year%4==0) && (year%100!=0)) || (year%400==0))
      printf("%d is a Leap Year.",year);
    else
      printf("%d is not a Leap Year.",year);
    return 0;
}
