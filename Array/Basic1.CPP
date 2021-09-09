//Code to accept "n" integers from users and display them one in each line.
#include<stdio.h>
int main(){
    int n,a[100],i;
    printf("Enter the number of elemnts:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter a value:");
        scanf("%d",&a[i]);
    }
    printf("The numbers entered are: \n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    return 0;
}
