//C Program to Print Prime Numbers In A Given Range.
#include<stdio.h>
int isPrime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            break;
        }
    }
    if(i>n/2)
      printf("%d\n",n);
}
int main(){
    int start,end,i;
    printf("Enter Start and End of the range:\n");
    scanf("%d\n%d",&start,&end);
    if(start<1 || end<=1)
      printf("No Prime Numbers.");
    else{
        printf("Prime Numbers from %d to %d:\n",start,end);
        for(i=start;i<=end;i++){
            if(i>1)
              isPrime(i);
        }
    }
    return 0;
}
