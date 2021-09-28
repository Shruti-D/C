//C Program to check if a Number Is Positive Or Negative.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    if(num>0)
      printf("Number is positive\n");
    else if(num==0)
      printf("Number is neither positive nor negative\n");
    else
      printf("Number is negative\n");
    return 0;
}
