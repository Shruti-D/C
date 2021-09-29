//C Program to Find the Largest Number Among Three Numbers.
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter 3 Numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if ((n1>n2) &&(n1>n3))
      printf("%d is the Greatest.",n1);
    else if((n2>n1) && (n2>n3))
      printf("%d is the Greatest.",n2);
    else if((n3>n1) && (n3>n2))
      printf("%d is Greatest.",n3);
    else
      printf("All Numbers are Equal.");
    return 0;
}
