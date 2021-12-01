/*C program to receive values of latitude and longitude in degress
  and calculate the distance between them in nautical miles*/
#include<stdio.h>
#include<math.h>

int main(){
    float l1, l2, g1, g2, d;
    printf("Enter the latitude and longitude of place1:");
    scanf("%f %f", &l1, &g1);
    
    printf("Enter the latitude and longitude of place2:");
    scanf("%f %f", &l2, &g2);
    
    /*Conversion to radians*/
    l1 = l1 * 3.14/180;
    l2 = l2 * 3.14/180;
    g1 = g1 * 3.14/180;
    g2 = g2 * 3.14/180;
    
    /**Formula for distance in nautical miles*/
    d = 3963 * acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance between place1 and place2: %f", d);
    return 0;
}
