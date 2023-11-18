#include<stdio.h>
int main()
{
    int N=6;
    int ara[N];
    int i;
    for(i=0;i<N;i++)
        //taking input
    {
        scanf("%d",&ara[i]);
    }
    int maxi=ara[0];
    for(i=0;i<N;i++)
    { if(ara[i]>maxi)
     {

            maxi=ara[i];
     }

    }
    printf("the maximum value is %d\n",maxi);
    return 0;
}
