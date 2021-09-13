//Code to accept "n" integers from users and display thier average.
#include<stdio.h>
int main(){
    int n,a[100],i,sum=0;
    float avg;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        sum = sum+a[i];
    avg =sum;
    avg = avg/n;
    printf("The average of the numbers is: %f",avg);
    return 0;
}
