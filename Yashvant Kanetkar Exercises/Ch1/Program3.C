/*C program to convert temperature in fahrenheit to centigrade*/
#include<stdio.h>

int main(){
    float fr, cent;
    
    /*Taking temperature from user in fahrenheit*/
    printf("Enter temperature in fahrenheit:");
    scanf("%f", &fr);
    
    /*Converting fahrenheit into centigrade*/
    cent = (fr - 32)*5.0/9.0;
    printf("Temperature in centigrade: %f", cent);
    
    return 0;
}
