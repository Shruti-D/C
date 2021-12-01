/*C program to print all trignometric ratios*/
#include<stdio.h>
#include<math.h>

int main(){
    float s, c, t, angle;
    
    printf("Enter angle:");
    scanf("%f", &angle);
    
    /*Conversion to radians*/
    angle = angle * 3.14/180;
    
    s = sin(angle);
    c = cos(angle);
    t = tan(angle);
    
    printf("sin = %f\ncos = %f\ntan = %f\n", s, c, t);
    
    return 0;
}
