/*C Program to calculate sum of digits of a 5-digit number*/
#include<stdio.h>

int main(){
    int a, n, sum=0;
    printf("Enter a five digit number:");
    scanf("%d", &a);
    n = a % 10;
    a = a /10;
    sum = sum + n;
    
    n = a % 10;
    a = a /10;
    sum = sum + n;
    
    n = a % 10;
    a = a /10;
    sum = sum + n;
    
    n = a % 10;
    a = a /10;
    sum = sum + n;
    
    n = a % 10;
    a = a /10;
    sum = sum + n;
    
    printf("Sum: %d", sum);
    return 0;
}
