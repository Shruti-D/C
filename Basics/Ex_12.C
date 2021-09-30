//Palindrome or not using C.
#include<stdio.h>
int main(){
    int num,temp,rem,rev=0;
    printf("Enter the number to check if it is Palindrome or not:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(num==rev)
      printf("%d is a Palindrome Number.",num);
    else
      printf("%d is not a Palindrome Number.",num);
    return 0;
}
