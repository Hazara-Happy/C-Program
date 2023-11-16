#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int choc=n;
    int packet=n;
    while(packet>=4)
    {
        choc +=(packet/4);
        packet =(packet/4)+(packet%4);


    }
    printf("%d",choc);
    return 0;
}
