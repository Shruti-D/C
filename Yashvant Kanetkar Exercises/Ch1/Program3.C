/*C program to calculate aggregate marks and precentage marks.*/
#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5,agg;
    float percent;
    
    /*Taking marks of the Student from user*/
    printf("Enter marks in 5 subjects \n");
    scanf("%d \n %d \n %d \n %d \n %d", &m1,&m2,&m3,&m4,&m5);
    
    /*Claculating aggregate*/
    agg = m1 +m2 + m3 + m4 + m5;
    
    /*Claculating percentage*/
    percent = agg/5;
    
    printf("Aggregate Marks: %d \n", agg);
    printf("Percentage Marks %f \n", percent);
    
    return 0;
    
}
