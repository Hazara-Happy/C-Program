#include<stdio.h>

int main()

{
    float width,length;

    printf("enter the width: ");
    scanf("%f",&width);
    printf("enter the length: ");
    scanf("%f",&length);

    double area;
    area=width*length;

    //print the area of rectangle
    printf("the area of rectangle is %lf",area);

    return 0;

}
