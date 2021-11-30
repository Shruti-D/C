/*C program to reverse a five-digit number*/
#include<stdio.h>
int main(){
    int a, n, rev= 0;
    printf("Enter a five digit number:");
    scanf("%d", &a);
    n = a % 10;
    a = a/10;
    rev = rev + n * 10000;
    
    n = a % 10;
    a = a/10;
    rev = rev + n * 1000;
    
    n = a % 10;
    a = a/10;
    rev = rev + n * 100;
    
    n = a % 10;
    a = a/10;
    rev = rev + n * 10;
    
    n = a % 10;
    a = a/10;
    rev = rev + n * 1;
    
    printf("Reverse of number: %d",rev);
    return 0;
    
}
