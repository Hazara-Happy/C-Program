
#include <stdio.h>
int main ()
{
    int N,x;
    int ara[200001];
    int i;
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        scanf("%d",&x);
        ara[x]=1;

    }
    for(i=1;i<=N;i++)
    { printf("%d->%d\n",i,ara[i]);

    }


    return 0;
}
