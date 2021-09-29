//C Program to Find Greatest of Two Numbers.
#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter Two Numbers:");
    scanf("%d\n%d",&n1,&n2);
    if(n1>n2)
      printf("%d is Greatest.",n1);
    else if (n2>n1)
      printf("%d is Greatest.",n2);
    else
      printf("%d and %d are Equal.",n1,n2);
    return 0;
}
