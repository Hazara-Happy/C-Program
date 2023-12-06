#include<stdio.h>

    int mysum(int x,int y)
    {

      printf("Adding two numbers...../n");
      return x+y;
}
int main()
{
    int a,b;
     a= mysum(17,20);

    printf("%d/n",a);
     b=mysum(203,2);

        printf("%d/n",b);
    return 0;

}
