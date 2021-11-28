/*C program to calculate and print paper sizes of A0, A1, ...., A8*/
#include<stdio.h>

int main(){
    int A0h, A0w, A1h, A1w, A2h, A2w, A3h, A3w, A4h, A4w;
    int A5h, A5w, A6h, A6w, A7h, A7w, A8h, A8w;
    
    A0h = 1189;
    A0w = 841;
    printf("Size of A0 paper = %dmm x %dmm\n", A0h, A0w);
    
    A1h = A0w;
    A1w = A0h/2;
    printf("Size of A1 paper = %dmm x %dmm\n", A1h, A1w);
    
    A2h = A1w;
    A2w = A1h/2;
    printf("Size of A2 paper = %dmm x %dmm\n", A2h, A2w);
    
    A3h = A2w;
    A3w = A2h/2;
    printf("Size of A3 paper = %dmm x %dmm\n", A3h, A3w);
    
    A4h = A3w;
    A4w = A3h/2;
    printf("Size of A4 paper = %dmm x %dmm\n", A4h, A4w);
    
    A5h = A4w;
    A5w = A4h/2;
    printf("Size of A5 paper = %dmm x %dmm\n", A5h, A5w);
    
    A6h = A5w;
    A6w = A5h/2;
    printf("Size of A6 paper = %dmm x %dmm\n", A6h, A6w);
    
    A7h = A6w;
    A7w = A6h/2;
    printf("Size of A7 paper = %dmm x %dmm\n", A7h, A7w);
    
    A8h = A7w;
    A8w = A7h/2;
    printf("Size of A8 paper = %dmm x %dmm\n", A8h, A8w);
}
