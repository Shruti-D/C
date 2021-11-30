/*C program to calculate area of a triangle*/
#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, sp ,area;
    printf("Enter the lengths of 3 sides of a triangle:");
    scanf("%f %f %f", &a, &b, &c);
    sp = (a + b +c)/2;
    area = sqrt(sp*(sp - a)*(sp - b)*(sp - c));
    printf("Area of Triangle: %f", area);
    
    return 0;
}
