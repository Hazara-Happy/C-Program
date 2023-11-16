#include<stdio.h>
int main()
{
    int i,n,w;
     int sum=0;
     printf("enter the number of passenger: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         scanf("%d",&w);
         sum+=w;

     }
     printf("total sum of weights%d",sum);
     return 0;
}
