/* C program to calculate Ramesh's Gross Salary*/
#include <stdio.h>

int main(){
    float bs, da, hra, gs;
    
    /*Basic Salary from Ramesh */
    printf("Enter Ramesh's Basic Salary:");
    scanf("%f", &bs);
    
    /*Dearness Allowance is 40% of Basic Salary*/
    da = 0.4*bs;
    
    /*House Rent Allowance is 20% of Basic Salary*/
    hra = 0.2*bs;
    
    /*Gross Salary is sum of Basic Salary and allowances*/
    gs = bs + da + hra;
    printf("Ramesh's Gross Salary: %f", gs);
    
    return 0;
}
  
