#include<stdio.h>
int main ()
{
    float celsius;

    printf("Enter the Celsius: ");
    scanf("%f",&celsius);

    double F;
    F=(celsius*9/5)+32;
    printf("the value of F is %lf",F);
    return 0;


}
