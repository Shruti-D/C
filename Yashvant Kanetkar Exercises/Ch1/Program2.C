/*C program to convert distance in kilometers into meters, centimeters,
  feet and inches.*/
#include<stdio.h>

int main(){
    float km,m,cm,ft,inch;
    
    /*Taking input in kilometers from user*/
    printf("Enter distance between two cities in kilometers:");
    scanf("%f", &km);
    
    /*Formula to convert kilometers into meters, centimeters, ft, inch*/
    m = km * 1000;
    cm = m * 100;
    inch= cm/2.54;
    ft = inch/12;
    
    /*Priting*/
    printf("Distance in meters: %f \n",m);
    printf("Distance in centimeters: %f \n",cm);
    printf("Distance in feets: %f \n",ft);
    printf("Distance in inches: %f \n",inch);
    
    return 0;
}
