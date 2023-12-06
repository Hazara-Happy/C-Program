#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int step;
    if(n%5==0)
    {
        step=n/5;
    }
    else
    {
        step=(n/5)+5;
    }

    printf("%d",step);
    return 0;
}
