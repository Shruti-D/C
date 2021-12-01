/*Interchange contents of 2 varibles c and d*/
#include<stdio.h>

int main(){
    int c, d, temp;
    printf("Enter the number at location c:");
    scanf("%d", &c);
    
    printf("Enter the number at location d:");
    scanf("%d", &d);
    
    /*interchanging contents using third temporary variable*/
    temp = c;
    c = d;
    d = temp;
    
    printf("After interchanging\n");
    printf("Number at location c: %d\n",c);
    printf("Number at location d: %d",d);
    
    return 0;
}
