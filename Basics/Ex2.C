//C Program to Check Whether a Number is Even or Odd.
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    
     //Checking if the number is divisible by 2 
    if(num%2==0)
      printf("Number is Even.\n");
    else
      printf("Number is Odd.\n");
    return 0;
}
