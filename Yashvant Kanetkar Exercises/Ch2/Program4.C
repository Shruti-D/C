/*C program to convert Cartesian co-ordinates into Polar co-ordinates*/
#include<stdio.h>
#include<math.h>

int main(){
    float x, y, r, theta;
    printf("Enter x and y Cartesian co-ordinates:");
    scanf("%f %f", &x, &y);
    
    /*Calculate r*/
    r = sqrt(x*x + y*y);
    
    /*Calculate tan inverse we use atan2() fuction*/
    theta = atan2(y,x);
    
    /*Conversion from radian to degree*/
    theta = theta * 180/3.14;
    printf("Polar co-ordinates(%f, %f)", r, theta);
    
    return 0;
}
