/*C progrqm to calculate wind chill factor*/
#include<stdio.h>
#include<math.h>

int main(){
    float t, v, wcf;
    printf("Enter values of temperaure and wind velocity:");
    scanf("%f %f", &t, &v);
    
    /*Formula to calculate wcf*/
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
    printf("Wind Chill Factor: %f", wcf);
    
    return 0;
}
