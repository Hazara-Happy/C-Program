
#include<stdio.h>
int main()

{
int a;
float b;
double c,d;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%f",b);
printf("Enter the third number: ");
scanf("%lf%lf",&c,&d);
//the double can store the big data
double x=(a+b+c+d)/4;
printf("average number is %lf",x);

return 0;




}
