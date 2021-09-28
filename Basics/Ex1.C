//C Program to check if a Number Is Positive Or Negative.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num>0)
      printf("Number is positive");
    else if(num==0)
      printf("Number is neither positive nor negative");
    else
      printf("Number is negative");
    return 0;
}
